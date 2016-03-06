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

class IranEntryPoint : public QMainWindow
{
	Q_OBJECT

public:
	IranEntryPoint(QWidget *parent = nullptr);
	~IranEntryPoint();

	QLabel *state = new QLabel(this);
	QProgressBar *progressBar = new QProgressBar(this);

	int RunApp(QApplication &application);

	Ui::IranEntryPointClass ui;
	Ui::Logging logging;
	Ui::ModDownloadSelector modDownloadSelector;
	Ui::ModOrderSelector modOrderSelector;
	Ui::DependenciesTree dependenciesTree;
private:

};

#endif // IramEntryPoint_Hpp
