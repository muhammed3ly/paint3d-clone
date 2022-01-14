#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qcolor.h>
#include <vtkGenericOpenGLRenderWindow.h>
#include <vtkRenderer.h>
#include <QVTKInteractor.h>
#include <vtkInteractorStyle.h>
#include <vtkNamedColors.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    Ui::MainWindow *ui;
	vtkSmartPointer<vtkGenericOpenGLRenderWindow> mRenderWindow;
	vtkSmartPointer<vtkRenderer> mRenderer;
	vtkSmartPointer<QVTKInteractor> mInteractor;
	vtkSmartPointer<vtkInteractorStyle> mInteractorStyle;
	void initializeColor();
public:
	void updateBoxColor();
	void updateRed(int value);
	void updateGreen(int value);
	void updateBlue(int value);
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
};

#endif // MAINWINDOW_H
