#include "../Headers/IranEntryPoint.hpp"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication application(argc, argv);
	IranEntryPoint eP;
	return eP.RunApp(argc, argv, application);
}
