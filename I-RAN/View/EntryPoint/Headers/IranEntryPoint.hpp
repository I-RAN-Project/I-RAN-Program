#ifndef IramEntryPoint_Hpp
#define IramEntryPoint_Hpp

#include <QtWidgets/QMainWindow>
#include "../../../Generated/ui_IranEntryPoint.h"

class IranEntryPoint : public QMainWindow
{
	Q_OBJECT

public:
	IranEntryPoint(QWidget *parent = 0);
	~IranEntryPoint();

	int RunApp(int argc, char *argv[], QApplication *application);

private:
	Ui::IranEntryPointClass ui;
};

#endif // IramEntryPoint_Hpp
