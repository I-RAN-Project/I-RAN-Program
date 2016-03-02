#include "../Headers/IranEntryPoint.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	IranEntryPoint eP;

	int runApp = eP.RunApp(app);
	return runApp;
}
