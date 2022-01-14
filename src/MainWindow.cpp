#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
	mRenderWindow(vtkSmartPointer<vtkGenericOpenGLRenderWindow>::New()),
	mRenderer(vtkSmartPointer<vtkRenderer>::New()),
	mInteractor(vtkSmartPointer<QVTKInteractor>::New()),
	mInteractorStyle(vtkSmartPointer<vtkInteractorStyle>::New())
{
    ui->setupUi(this);
	mRenderWindow->AddRenderer(mRenderer);
	mRenderWindow->SetInteractor(mInteractor);
	ui->openGLWidget_2->setRenderWindow(mRenderWindow);
	mInteractor->SetInteractorStyle(mInteractorStyle);
	mInteractor->Initialize();
	mRenderer->GradientBackgroundOn();
	vtkNew<vtkNamedColors> colors;
	mRenderer->SetBackground(colors->GetColor3d("Banana").GetData());
	mRenderer->SetBackground2(colors->GetColor3d("Tomato").GetData());
	initializeColor();

	QObject::connect(ui->redColorSlider, &QSlider::valueChanged, this, &MainWindow::updateRed);
	QObject::connect(ui->greenColorSlider, &QSlider::valueChanged, this, &MainWindow::updateGreen);
	QObject::connect(ui->blueColorSlider, &QSlider::valueChanged, this, &MainWindow::updateBlue);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initializeColor() {
	int r, g, b;
	r = ui->redColorSlider->value();
	g = ui->greenColorSlider->value();
	b = ui->blueColorSlider->value();
	ui->redValue->setText(QString::number(r));
	ui->greenValue->setText(QString::number(g));
	ui->blueValue->setText(QString::number(b));
	ui->colorBox->setStyleSheet("background-color: rgb(" + QString::number(r) + "," + QString::number(g) + "," + QString::number(b) + " )");
}


void MainWindow::updateRed(int value) {
	initializeColor();
}
void MainWindow::updateGreen(int value) {
	initializeColor();
}
void MainWindow::updateBlue(int value) {
	initializeColor();
}