#include "../Headers/IranEntryPoint.hpp"

IranEntryPoint::IranEntryPoint(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
}

IranEntryPoint::~IranEntryPoint()
{

}

int IranEntryPoint::RunApp(int argc, char *argv[], QApplication *application)
{
	show();
	return application->exec();
}