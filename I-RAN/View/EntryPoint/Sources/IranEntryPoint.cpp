#include "../Headers/IranEntryPoint.hpp"

IranEntryPoint::IranEntryPoint(QWidget *parent) : QMainWindow(parent)
{
	ui.setupUi(this);
}

IranEntryPoint::~IranEntryPoint()
{

}

int IranEntryPoint::RunApp(QApplication &application)
{
	QWidget modDownloadSelectorWidget;
	modDownloadSelector.setupUi(&modDownloadSelectorWidget);
	ui.tabWidget->addTab(&modDownloadSelectorWidget, QStringLiteral("Mod Downlaod Selector"));

	QWidget modOrderSelectorWidget;
	modOrderSelector.setupUi(&modOrderSelectorWidget);
	ui.tabWidget->addTab(&modOrderSelectorWidget, QStringLiteral("Mod Order Selector"));

	QWidget dependenciesTreeWidget;
	dependenciesTree.setupUi(&dependenciesTreeWidget);
	ui.tabWidget->addTab(&dependenciesTreeWidget, QStringLiteral("Dependencies Tree Widget"));

	QWidget loggingWidget;
	logging.setupUi(&loggingWidget);
	ui.tabWidget->addTab(&loggingWidget, QStringLiteral("Logging"));

	show();
	return application.exec();
	
	//To stop the C4100 warning.
	application;
}