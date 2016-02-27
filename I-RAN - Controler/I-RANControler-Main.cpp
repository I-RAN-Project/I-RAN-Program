#include "I-RANControler-Main.hpp"

IRAN::Controler::IRANControlerMain::IRANControlerMain()
{
	currPath = boost::filesystem::current_path();
	gitWrapper = new IRAN::Model::Filesystem::GitWrapper::GitWrapper;
	runExecutable = new IRAN::Model::Filesystem::RunExecutables;

	std::wstring curCreateDir = currPath.wstring() + L"\\temp";
	if (!boost::filesystem::create_directory(curCreateDir))
	{
		std::wcerr << L"File creation failed!\n";
		std::wcerr << curCreateDir.c_str() << L"\n";
	}
	
	curCreateDir = currPath.wstring() + L"\\temp\\T1";
	if (!boost::filesystem::create_directory(curCreateDir))
	{
		std::wcerr << L"File creation failed!\n";
		std::wcerr << curCreateDir.c_str() << L"\n";
	}

	curCreateDir = currPath.wstring() + L"\\temp\\T2";
	if (!boost::filesystem::create_directory(curCreateDir))
	{
		std::wcerr << L"File creation failed!\n";
		std::wcerr << curCreateDir.c_str() << L"\n";
	}
}

IRAN::Controler::IRANControlerMain::~IRANControlerMain()
{
	delete gitWrapper;
	delete runExecutable;

	uintmax_t dirRemoved = boost::filesystem::remove_all(currPath.wstring() + L"\\temp");

	std::wcout << L"Removed " << dirRemoved << L" files!\n";
}

int IRAN::Controler::IRANControlerMain::IRANEntryPoint()
{
	gitWrapper->RunGitCommand(L"init", currPath.wstring() + L"\\temp\\T1", true);

	system("pause");

	return 0;
}

int main()
{
	IRAN::Controler::IRANControlerMain appMain;
	int rt = appMain.IRANEntryPoint();
	return rt;
}