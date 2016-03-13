#include "../Headers/IranEntryPoint.hpp"

IranEntryPoint::IranEntryPoint(QWidget *parent) : QMainWindow(parent)
{

	ui.setupUi(this);
	state = new QLabel(this);
	progressBar = new QProgressBar(this);

	state->setMinimumSize(state->sizeHint());
	state->setText(tr("state"));
	state->setToolTip(tr("state"));

	progressBar->setAlignment(Qt::AlignCenter);
	progressBar->setFormat(tr("progressBar"));
	progressBar->setRange(0, 100);
	progressBar->setValue(0);

	ui.statusBar->addPermanentWidget(state);
	ui.statusBar->addPermanentWidget(progressBar, 1);

	curl_global_init(CURL_GLOBAL_ALL);
	myCURLHandle = curl_easy_init(); 
}

IranEntryPoint::~IranEntryPoint()
{
	curl_easy_cleanup(myCURLHandle);
	curl_global_cleanup();

	delete state;
	delete progressBar;
}

int IranEntryPoint::RunApp(QApplication &application)
{
	QWidget modDownloadSelectorWidget;
	modDownloadSelector.setupUi(&modDownloadSelectorWidget);
	ui.tabWidget->addTab(&modDownloadSelectorWidget, tr("Mod Download Selector"));

	QWidget modOrderSelectorWidget;
	modOrderSelector.setupUi(&modOrderSelectorWidget);
	ui.tabWidget->addTab(&modOrderSelectorWidget, tr("Mod Order Selector"));

	QWidget dependenciesTreeWidget;
	dependenciesTree.setupUi(&dependenciesTreeWidget);
	ui.tabWidget->addTab(&dependenciesTreeWidget, tr("Dependencies Tree Widget"));

	QWidget loggingWidget;
	logging.setupUi(&loggingWidget);
	ui.tabWidget->addTab(&loggingWidget, tr("Logging"));

	show();													 
	return application.exec();
}
