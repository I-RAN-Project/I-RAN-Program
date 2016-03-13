#ifndef IramEntryPoint_Hpp
#define IramEntryPoint_Hpp

#include "../../../Generated/ui_IranEntryPoint.h"
#include "../../../Generated/ui_DependenciesTree.h"
#include "../../../Generated/ui_Logging.h"
#include "../../../Generated/ui_ModDownloadSelector.h"
#include "../../../Generated/ui_ModOrderSelector.h"

#include <QApplication>

#include <QLabel>
#include <QProgressBar>

#include <curl/curl.h>

class IranEntryPoint : public QMainWindow
{
	Q_OBJECT

public:
	IranEntryPoint(QWidget *parent = nullptr);
	~IranEntryPoint();

	int RunApp(QApplication &application);
private:
	QLabel *state;
	QProgressBar *progressBar;

	CURL * myCURLHandle;

	Ui::IranEntryPointClass ui;
	Ui::Logging logging;
	Ui::ModDownloadSelector modDownloadSelector;
	Ui::ModOrderSelector modOrderSelector;
	Ui::DependenciesTree dependenciesTree;
};

#endif // IramEntryPoint_Hpp
