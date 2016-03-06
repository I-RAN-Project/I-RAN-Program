#include "../Headers/IranEntryPoint.hpp"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	
	IranEntryPoint *eP;

	eP = new IranEntryPoint();

	int runApp = eP->RunApp(app);
	return runApp;
}
