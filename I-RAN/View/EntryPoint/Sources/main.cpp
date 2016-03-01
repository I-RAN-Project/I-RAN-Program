#include "../Headers/IranEntryPoint.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	IranEntryPoint eP;

	//I need to pass a reference to app... for reasons!
	int runApp = eP.RunApp(&app);
	return runApp;
}
