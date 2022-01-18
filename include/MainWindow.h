#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qinputdialog.h>
#include <qcolor.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkRenderer.h>
#include <QVTKInteractor.h>
#include <vtkInteractorStyle.h>
#include <vtkNamedColors.h>
#include <vtkCamera.h>
#include <vtkActor.h>
#include <vtkNamedColors.h>
#include <vtkPointData.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkCamera.h>
#include <vtkProperty.h>
#include <vtkProp.h>
#include <vtkSphereSource.h>
#include <vtkCubeSource.h>
#include <vtkConeSource.h>
#include <vtkRegularPolygonSource.h>
#include <vtkPolygon.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <QMessageBox.h>
#include <Cube.h>
#include <Cone.h>
#include <Sphere.h>
#include <Circle.h>
#include <Square.h>
#include <Rectangle.h>
#include <Triangle.h>
#include <MouseInteractorHighLightActor.h>
#include <vector>
#define NewPtr(obj, class) vtkSmartPointer<class> obj = vtkSmartPointer<class>::New()

using namespace std;
namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
	int* selectedActor;
	vector<Shape*> shapes;
	static double azimuth, elevation;
	vtkSmartPointer<vtkGenericOpenGLRenderWindow> mRenderWindow;
	vtkSmartPointer<vtkRenderer> mRenderer;
	vtkSmartPointer<QVTKInteractor> mInteractor;
	vtkSmartPointer<MouseInteractorHighLightActor> mInteractorStyle;
	void updateColorBox();
	double* selectedRGB(bool normalize);
	void updatePosition();
	void InitializeSlotsAndSignals();
	void InitializeBackground();
	void InitializeCameraSettings();
	void organizingWindowDependecies();
	void newSketch();
	void clearShapesVector();
	void deleteActor();
public:
	void addCube();
	void addSphere();
	void addCone();
	void addCircle();
	void addSquare();
	void addRectangle();
	void addTriangle();
	void updateCameraX(double value);
	void updateCameraY(double value);
	void updateCameraZ(double value);
	void updateCameraAzimuth(double value);
	void updateCameraElevation(double value);
	bool getData(map<string, double*> &dataNeeded);
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

};

#endif // MAINWINDOW_H
