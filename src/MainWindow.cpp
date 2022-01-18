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
	mInteractorStyle(vtkSmartPointer<vtkInteractorStyleTrackballActor>::New())
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
	ui->openGLWidget_2->setRenderWindow(mRenderWindow);
	mRenderWindow->AddRenderer(mRenderer);
	mInteractor->SetRenderWindow(mRenderWindow);
	mInteractor->SetInteractorStyle(mInteractorStyle);
	mInteractor->Initialize();
}

void MainWindow::newSketch()
{
	mRenderer->RemoveAllViewProps();
	InitializeCameraSettings();
	updateColorBox();
	mRenderWindow->Render();
}

MainWindow::~MainWindow()
{
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
	int r, g, b;
	selectedRGB(r, g, b);
	ui->redValue->setText(QString::number(r));
	ui->greenValue->setText(QString::number(g));
	ui->blueValue->setText(QString::number(b));
	ui->colorBox->setStyleSheet("background-color: rgb(" + QString::number(r) + "," + QString::number(g) + "," + QString::number(b) + " )");
}

void MainWindow::selectedRGB(int &r, int &g, int &b) {
	r = ui->redColorSlider->value();
	g = ui->greenColorSlider->value();
	b = ui->blueColorSlider->value();
}

void MainWindow::addCube() {
	NewPtr(cube, vtkCubeSource);
	NewPtr(cubeMapper, vtkPolyDataMapper);
	NewPtr(cubeActor, vtkActor);
	unordered_map<string, double> valuesNeeded;
	valuesNeeded["x"] = 0;
	valuesNeeded["y"] = 0;
	valuesNeeded["z"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		cube->SetXLength(valuesNeeded["x"]);
		cube->SetYLength(valuesNeeded["y"]);
		cube->SetZLength(valuesNeeded["z"]);
		cube->Update();
		cubeMapper->SetInputData(cube->GetOutput());
		cubeMapper->ScalarVisibilityOff();
		cubeActor->SetMapper(cubeMapper);
		int r, g, b;
		selectedRGB(r, g, b);
		cubeActor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(cubeActor);
		mRenderer->ResetCamera();
		updatePosition();
		mRenderWindow->Render();
	}
}

void MainWindow::addCone() {
	NewPtr(cone, vtkConeSource);
	NewPtr(coneMapper, vtkPolyDataMapper);
	NewPtr(coneActor, vtkActor);

	unordered_map<string, double> valuesNeeded;
	valuesNeeded["height"] = 0;
	valuesNeeded["radius"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		cone->SetHeight(valuesNeeded["height"]);
		cone->SetRadius(valuesNeeded["radius"]);
		cone->Update();
		coneMapper->SetInputData(cone->GetOutput());
		coneActor->SetMapper(coneMapper);
		int r, g, b;
		selectedRGB(r, g, b);
		coneActor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(coneActor);
		mRenderer->ResetCamera();
		updatePosition();
		mRenderWindow->Render();
	}
}

void MainWindow::addSphere() {
	NewPtr(sphereSource, vtkSphereSource);
	NewPtr(sphereMapper, vtkPolyDataMapper);
	NewPtr(sphereActor, vtkActor);

	unordered_map<string, double> valuesNeeded;
	valuesNeeded["radius"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		sphereSource->SetRadius(valuesNeeded["radius"]);
		sphereSource->Update();
		sphereMapper->SetInputConnection(sphereSource->GetOutputPort());
		sphereActor->SetMapper(sphereMapper);
		int r, g, b;
		selectedRGB(r, g, b);
		sphereActor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(sphereActor);
		mRenderer->ResetCamera();
		updatePosition();
		mRenderWindow->Render();

	}
}

void MainWindow::addCircle() {
	NewPtr(polygonSource, vtkRegularPolygonSource);
	NewPtr(mapper, vtkPolyDataMapper);
	NewPtr(actor, vtkActor);

	unordered_map<string, double> valuesNeeded;
	valuesNeeded["radius"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		polygonSource->SetNumberOfSides(50);
		polygonSource->SetRadius(valuesNeeded["radius"]);
		mapper->SetInputConnection(polygonSource->GetOutputPort());
		actor->SetMapper(mapper);
		int r, g, b;
		selectedRGB(r, g, b);
		actor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(actor);
		mRenderer->ResetCamera();
		mRenderWindow->Render();
	}
}

void MainWindow::addSquare() {
	NewPtr(points, vtkPoints);
	NewPtr(polygon, vtkPolygon);
	NewPtr(polygons, vtkCellArray);
	NewPtr(polygonPolyData, vtkPolyData);
	NewPtr(mapper, vtkPolyDataMapper);
	NewPtr(actor, vtkActor);

	unordered_map<string, double> valuesNeeded;
	valuesNeeded["side length"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		double side = valuesNeeded["side length"];
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
		actor->SetMapper(mapper);
		int r, g, b;
		selectedRGB(r, g, b);
		actor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(actor);
		mRenderer->ResetCamera();
		mRenderWindow->Render();
	}
}

void MainWindow::addRectangle() {
	NewPtr(points, vtkPoints);
	NewPtr(polygon, vtkPolygon);
	NewPtr(polygons, vtkCellArray);
	NewPtr(polygonPolyData, vtkPolyData);
	NewPtr(mapper, vtkPolyDataMapper);
	NewPtr(actor, vtkActor);

	unordered_map<string, double> valuesNeeded;
	valuesNeeded["length"] = 0;
	valuesNeeded["width"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		double length = valuesNeeded["length"], width = valuesNeeded["width"];
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
		actor->SetMapper(mapper);
		int r, g, b;
		selectedRGB(r, g, b);
		actor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(actor);
		mRenderer->ResetCamera();
		mRenderWindow->Render();
	}
}

void MainWindow::addTriangle() {
	NewPtr(points, vtkPoints);
	NewPtr(polygon, vtkPolygon);
	NewPtr(polygons, vtkCellArray);
	NewPtr(polygonPolyData, vtkPolyData);
	NewPtr(mapper, vtkPolyDataMapper);
	NewPtr(actor, vtkActor);


	unordered_map<string, double> valuesNeeded;
	valuesNeeded["side"] = 0;
	bool valuesAdded = getData(valuesNeeded);
	if (valuesAdded) {
		double side = valuesNeeded["side"];

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
		actor->SetMapper(mapper);
		int r, g, b;
		selectedRGB(r, g, b);
		actor->GetProperty()->SetColor(r / 255., g / 255., b / 255.);
		mRenderer->AddActor(actor);
		mRenderer->ResetCamera();
		mRenderWindow->Render();
	}
}

bool MainWindow::getData(unordered_map<string, double> &dataNeeded) {
	bool ok;
	for (auto &data : dataNeeded) {
		string title = "Please enter value of the " + data.first;
		string label = data.first + ":";
		double d = QInputDialog::getDouble(this, tr(title.c_str()), tr(label.c_str()), 2, -999, 999, 2, &ok);
		if (ok)
			data.second = d;
		else
			return false;
	}
	return true;
}