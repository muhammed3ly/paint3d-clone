#include <QtWidgets/qapplication.h>
#include <MainWindow.h>
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	MainWindow mainWindow;
	mainWindow.setWindowState(Qt::WindowMaximized);
	mainWindow.show();
	return app.exec();
}