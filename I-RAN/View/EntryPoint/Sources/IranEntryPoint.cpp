#include "../Headers/IranEntryPoint.hpp"

IranEntryPoint::IranEntryPoint(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
}

IranEntryPoint::~IranEntryPoint()
{

}

int IranEntryPoint::RunApp(QApplication *application)
{
	application;

	show();
	return application->exec();
}