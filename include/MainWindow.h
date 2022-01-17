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
#include <unordered_map>
#include <vtkCamera.h>
#include <vtkCellArray.h>
#include <vtkFloatArray.h>
#include <vtkActor.h>
#include <vtkNamedColors.h>
#include <vtkNew.h>
#include <vtkPointData.h>
#include <vtkPoints.h>
#include <vtkPolyData.h>
#include <vtkPolyDataMapper.h>
#include <vtkCamera.h>
#include <vtkProperty.h>
#include <vtkSphereSource.h>
#include <vtkGlyph3D.h>
#include <vtkAxesActor.h>
#include <vtkOrientationMarkerWidget.h>
#include <vtkCubeSource.h>
#include <vtkConeSource.h>
#include <vtkRegularPolygonSource.h>
#include <vtkPolygon.h>
#include <vtkInteractorStyleTrackballActor.h>
#include <vtkBoxWidget.h>
#include <vtkMyCallback.h>
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
	static double azimuth, elevation;
	vtkSmartPointer<vtkGenericOpenGLRenderWindow> mRenderWindow;
	vtkSmartPointer<vtkRenderer> mRenderer;
	vtkSmartPointer<QVTKInteractor> mInteractor;
	vtkSmartPointer<vtkInteractorStyle> mInteractorStyle;
	void updateColorBox();
	double* selectedRGB();
	void updatePosition();
	void InitializeSlotsAndSignals();
	void InitializeBackground();
	void InitializeCameraSettings();
	void organizingWindowDependecies();
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
	bool getData(unordered_map<string, double> &dataNeeded);
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

#endif // MAINWINDOW_H
