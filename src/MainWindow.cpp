#include "MainWindow.h"
#include "ui_MainWindow.h"

double MainWindow::azimuth = 0;
double MainWindow::elevation = 0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), 
	mRenderWindow(vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New()),
	mRenderer(vtkSmartPointer<vtkRenderer>::New()),
	mInteractor(vtkSmartPointer<QVTKInteractor>::New()),
	mInteractorStyle(MouseInteractorHighLightActor::New())
{
    ui->setupUi(this);
	organizingWindowDependecies();
	InitializeBackground();
	InitializeSlotsAndSignals();
	InitializeCameraSettings();
	updateColorBox();
}

void MainWindow::InitializeSlotsAndSignals() {
	QObject::connect(ui->redColorSlider, &QSlider::valueChanged, this, &MainWindow::updateColorBox);
	QObject::connect(ui->greenColorSlider, &QSlider::valueChanged, this, &MainWindow::updateColorBox);
	QObject::connect(ui->blueColorSlider, &QSlider::valueChanged, this, &MainWindow::updateColorBox);
	QObject::connect(ui->addCubeButton, &QPushButton::clicked, this, &MainWindow::addCube);
	QObject::connect(ui->addSphereButton, &QPushButton::clicked, this, &MainWindow::addSphere);
	QObject::connect(ui->addConeButton, &QPushButton::clicked, this, &MainWindow::addCone);
	QObject::connect(ui->addCircleButton, &QPushButton::clicked, this, &MainWindow::addCircle);
	QObject::connect(ui->addSquareButton, &QPushButton::clicked, this, &MainWindow::addSquare);
	QObject::connect(ui->addRectangleButton, &QPushButton::clicked, this, &MainWindow::addRectangle);
	QObject::connect(ui->addTriangleButton, &QPushButton::clicked, this, &MainWindow::addTriangle);
	QObject::connect(ui->cameraX, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::updateCameraX);
	QObject::connect(ui->cameraY, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::updateCameraY);
	QObject::connect(ui->cameraZ, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::updateCameraZ);
	QObject::connect(ui->cameraAzimuth, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::updateCameraAzimuth);
	QObject::connect(ui->cameraElevation, QOverload<double>::of(&QDoubleSpinBox::valueChanged), this, &MainWindow::updateCameraElevation);
	QObject::connect(ui->clearSpaceButton, &QPushButton::clicked, this, &MainWindow::newSketch);
	QObject::connect(ui->deleteActor, &QPushButton::clicked, this, &MainWindow::deleteActor);
}

void MainWindow::InitializeBackground()
{
	mRenderer->GradientBackgroundOn();
	vtkNew<vtkNamedColors> colors;
	mRenderer->SetBackground(colors->GetColor3d("Banana").GetData());
	mRenderer->SetBackground2(colors->GetColor3d("Tomato").GetData());
}

void MainWindow::InitializeCameraSettings()
{
	mRenderer->GetActiveCamera()->SetPosition(0, 0, 5);
	mRenderer->GetActiveCamera()->SetFocalPoint(0, 0, 0);
}

void MainWindow::organizingWindowDependecies()
{
	selectedActor = new int;
	*selectedActor = -1;
	mInteractorStyle->selectedActor = selectedActor;
	mInteractorStyle->shapes = &shapes;
	ui->openGLWidget_2->setRenderWindow(mRenderWindow);
	mRenderWindow->AddRenderer(mRenderer);
	mInteractorStyle->SetDefaultRenderer(mRenderer);
	mInteractor->SetRenderWindow(mRenderWindow);
	mInteractor->SetInteractorStyle(mInteractorStyle);
	mInteractor->Initialize();
}


void MainWindow::newSketch()
{
	mRenderer->RemoveAllViewProps();
	clearShapesVector();
	InitializeCameraSettings();
	updateColorBox();
	mRenderWindow->Render();
}

void MainWindow::clearShapesVector() {
	for (int i = 0; i < shapes.size() ; i++) {
		delete shapes[i];
	}
	shapes.clear();
}

void MainWindow::deleteActor()
{
	if (*selectedActor != -1) {
		mRenderer->RemoveActor(shapes[*selectedActor]->actor);
		shapes.erase(shapes.begin() + *selectedActor);
		*selectedActor = -1;
		mRenderWindow->Render();
	}
}

MainWindow::~MainWindow()
{
	clearShapesVector();
    delete ui;
}

void MainWindow::updatePosition() {
	double* position = mRenderer->GetActiveCamera()->GetPosition();
	ui->cameraX->setValue(position[0]);
	ui->cameraY->setValue(position[1]);
	ui->cameraZ->setValue(position[2]);
}

void MainWindow::updateCameraX(double value){
	double* position = mRenderer->GetActiveCamera()->GetPosition();
	mRenderer->GetActiveCamera()->SetPosition(value, position[1], position[2]);
	mRenderWindow->Render();
}

void MainWindow::updateCameraY(double value){
	double* position = mRenderer->GetActiveCamera()->GetPosition();
	mRenderer->GetActiveCamera()->SetPosition(position[0], value, position[2]);
	mRenderWindow->Render();
}

void MainWindow::updateCameraZ(double value){
	double* position = mRenderer->GetActiveCamera()->GetPosition();
	mRenderer->GetActiveCamera()->SetPosition(position[0], position[1], value);
	mRenderWindow->Render();
}

void MainWindow::updateCameraAzimuth(double value){
	mRenderer->GetActiveCamera()->Azimuth(-azimuth);
	mRenderer->GetActiveCamera()->Azimuth(value);
	azimuth = value;
	updatePosition();
	mRenderWindow->Render();
}

void MainWindow::updateCameraElevation(double value){
	mRenderer->GetActiveCamera()->Elevation(-elevation);
	mRenderer->GetActiveCamera()->Elevation(value);
	elevation = value;
	updatePosition();
	mRenderWindow->Render();
}

void MainWindow::updateColorBox() {
	double* rgb = selectedRGB(false);
	QString* rgbTxt = new QString[3];
	for (int i = 0; i < 3; i++) {
		rgbTxt[i] = QString::number(rgb[i]);
	}
	ui->redValue->setText(rgbTxt[0]);
	ui->greenValue->setText(rgbTxt[1]);
	ui->blueValue->setText(rgbTxt[2]);
	ui->colorBox->setStyleSheet("background-color: rgb(" + rgbTxt[0] + "," + rgbTxt[1] + "," + rgbTxt[2] + ")");
	delete[] rgb;
	delete[] rgbTxt;
}

double* MainWindow::selectedRGB(bool normalize = true) {
	double don = normalize ? 255 : 1;
	return new double[3]{ ui->redColorSlider->value() / don,
		ui->greenColorSlider->value() / don,
		ui->blueColorSlider->value() / don };
}

void MainWindow::addCube() {
	Shape* cube = new Cube();
	NewPtr(cubeSource, vtkCubeSource);
	NewPtr(cubeMapper, vtkPolyDataMapper);
	if (getData(cube->valuesNeeded)) {
		cubeSource->SetXLength(*(cube->valuesNeeded["length"]));
		cubeSource->SetYLength(*(cube->valuesNeeded["width"]));
		cubeSource->SetZLength(*(cube->valuesNeeded["height"]));
		cubeSource->Update();
		cubeMapper->SetInputData(cubeSource->GetOutput());
		cube->actor->SetMapper(cubeMapper);
		cube->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(cube->actor);
		mRenderer->ResetCamera();
		updatePosition();
		shapes.push_back(cube);
		mRenderWindow->Render();


	}
}

void MainWindow::addCone() {
	Shape* cone = new Cone();
	NewPtr(coneSource, vtkConeSource);
	NewPtr(coneMapper, vtkPolyDataMapper);
	if (getData(cone->valuesNeeded)) {
		coneSource->SetHeight(*(cone->valuesNeeded["height"]));
		coneSource->SetRadius(*(cone->valuesNeeded["radius"]));
		coneSource->Update();
		coneMapper->SetInputData(coneSource->GetOutput());
		cone->actor->SetMapper(coneMapper);
		cone->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(cone->actor);
		mRenderer->ResetCamera();
		updatePosition();
		shapes.push_back(cone);
		mRenderWindow->Render();
	}
}

void MainWindow::addSphere() {
	Shape* sphere = new Sphere();
	NewPtr(sphereSource, vtkSphereSource);
	NewPtr(sphereMapper, vtkPolyDataMapper);
	if (getData(sphere->valuesNeeded)) {
		sphereSource->SetRadius(*(sphere->valuesNeeded["radius"]));
		sphereSource->Update();
		sphereMapper->SetInputConnection(sphereSource->GetOutputPort());
		sphere->actor->SetMapper(sphereMapper);
		sphere->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(sphere->actor);
		mRenderer->ResetCamera();
		updatePosition();
		shapes.push_back(sphere);
		mRenderWindow->Render();
	}
}

void MainWindow::addCircle() {
	Shape* circle = new Circle();
	NewPtr(polygonSource, vtkRegularPolygonSource);
	NewPtr(mapper, vtkPolyDataMapper);
	if (getData(circle->valuesNeeded)) {
		polygonSource->SetNumberOfSides(50);
		polygonSource->SetRadius(*(circle->valuesNeeded["radius"]));
		mapper->SetInputConnection(polygonSource->GetOutputPort());
		circle->actor->SetMapper(mapper);
		circle->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(circle->actor);
		mRenderer->ResetCamera();
		shapes.push_back(circle);
		mRenderWindow->Render();
	}
}

void MainWindow::addSquare() {
	Shape* square = new Square();
	NewPtr(points, vtkPoints);
	NewPtr(polygon, vtkPolygon);
	NewPtr(polygons, vtkCellArray);
	NewPtr(polygonPolyData, vtkPolyData);
	NewPtr(mapper, vtkPolyDataMapper);
	if (getData(square->valuesNeeded)) {
		double side = *(square->valuesNeeded["length"]);
		points->InsertNextPoint(-side / 2, -side / 2, 0.0);
		points->InsertNextPoint(side / 2, -side / 2, 0.0);
		points->InsertNextPoint(side / 2, side / 2, 0.0);
		points->InsertNextPoint(-side / 2, side / 2, 0.0);

		polygon->GetPointIds()->SetNumberOfIds(4);
		for (int i = 0; i < 4; i++) {
			polygon->GetPointIds()->SetId(i, i);
		}

		polygons->InsertNextCell(polygon);
		polygonPolyData->SetPoints(points);
		polygonPolyData->SetPolys(polygons);
		mapper->SetInputData(polygonPolyData);
		square->actor->SetMapper(mapper);
		square->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(square->actor);
		mRenderer->ResetCamera();
		mRenderWindow->Render();
	}
}

void MainWindow::addRectangle() {
	Shape* rectangle = new MRectangle();
	NewPtr(points, vtkPoints);
	NewPtr(polygon, vtkPolygon);
	NewPtr(polygons, vtkCellArray);
	NewPtr(polygonPolyData, vtkPolyData);
	NewPtr(mapper, vtkPolyDataMapper);
	if (getData(rectangle->valuesNeeded)) {
		double length = *(rectangle->valuesNeeded["length"]), width = *(rectangle->valuesNeeded["width"]);
		points->InsertNextPoint(-width / 2, -length / 2, 0.0);
		points->InsertNextPoint(width / 2, -length / 2, 0.0);
		points->InsertNextPoint(width / 2, length / 2, 0.0);
		points->InsertNextPoint(- width / 2, length / 2, 0.0);
		polygon->GetPointIds()->SetNumberOfIds(4);
		for (int i = 0; i < 4; i++) {
			polygon->GetPointIds()->SetId(i, i);
		}
		polygons->InsertNextCell(polygon);
		polygonPolyData->SetPoints(points);
		polygonPolyData->SetPolys(polygons);
		mapper->SetInputData(polygonPolyData);
		rectangle->actor->SetMapper(mapper);
		rectangle->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(rectangle->actor);
		mRenderer->ResetCamera();
		shapes.push_back(rectangle);
		mRenderWindow->Render();
	}
}

void MainWindow::addTriangle() {
	Shape* triangle = new Triangle();
	NewPtr(points, vtkPoints);
	NewPtr(polygon, vtkPolygon);
	NewPtr(polygons, vtkCellArray);
	NewPtr(polygonPolyData, vtkPolyData);
	NewPtr(mapper, vtkPolyDataMapper);
	if (getData(triangle->valuesNeeded)) {
		double side = *(triangle->valuesNeeded["length"]);

		points->InsertNextPoint(-side / 2, -side / 2, 0.0);
		points->InsertNextPoint(0, side / 2, 0.0);
		points->InsertNextPoint(side / 2, -side / 2, 0.0);

		polygon->GetPointIds()->SetNumberOfIds(3);
		for (int i = 0; i < 4; i++) {
			polygon->GetPointIds()->SetId(i, i);
		}

		polygons->InsertNextCell(polygon);
		polygonPolyData->SetPoints(points);
		polygonPolyData->SetPolys(polygons);
		mapper->SetInputData(polygonPolyData);
		triangle->actor->SetMapper(mapper);
		triangle->actor->GetProperty()->SetColor(selectedRGB());
		mRenderer->AddActor(triangle->actor);
		mRenderer->ResetCamera();
		shapes.push_back(triangle);
		mRenderWindow->Render();
	}
}

bool MainWindow::getData(map<string, double*> &dataNeeded) {
	bool ok;
	for (auto &data : dataNeeded) {
		string title = "Please enter value of the " + data.first;
		string label = data.first + ":";
		double d = QInputDialog::getDouble(this, tr(title.c_str()), tr(label.c_str()), 2, -999, 999, 2, &ok);
		if (ok)
			data.second = &d;
		else
			return false;
	}
	return true;
}