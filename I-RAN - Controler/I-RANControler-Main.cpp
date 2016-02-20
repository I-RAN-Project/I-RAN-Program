#include "I-RANControler-Main.hpp"

IRAN::Controler::IRANControlerMain::IRANControlerMain()
{
	currPath = boost::filesystem::current_path();
	gitWrapper = new Filesystem::GitWrapper::GitWrapper;
	runExecutable = new Filesystem::RunExecutables;

	std::wstring curCreateDir = currPath.wstring() + L"\\temp";
	if (!boost::filesystem::create_directory(curCreateDir))
	{
		std::cerr << L"File creation failed!\n";
		std::cerr << curCreateDir.c_str() << L"\n";
	}
	
	curCreateDir = currPath.wstring() + L"\\temp\\T1";
	if (!boost::filesystem::create_directory(curCreateDir))
	{
		std::cerr << L"File creation failed!\n";
		std::cerr << curCreateDir.c_str() << L"\n";
	}

	curCreateDir = currPath.wstring() + L"\\temp\\T2";
	if (!boost::filesystem::create_directory(curCreateDir))
	{
		std::cerr << L"File creation failed!\n";
		std::cerr << curCreateDir.c_str() << L"\n";
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
	currPath = boost::filesystem::current_path();

	std::wcout << L"NOTE: If you get a 1 on the RunExecutable and RunGitCommand function, that meens we failed. It will ussally print out the error.\n\n";
	int rcFromExecutable;

	std::wcout << L"Skip to Git stuff? (y/n) (LOWERCASE) \n\n";

	std::wstring input;
	std::wcin >> input;

	while (input != L"n" && input != L"y")
	{
		std::wcout << L"Please input valid information. \n\n";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::wcin >> input;
	}

	std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::wcout << L"\n";

	if (input == L"n")
	{
		std::wcout << L"Our current path is: " << currPath << L"\n\n";

		std::wcout << L"\nHit ENTER to enter next stage\n";

		std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::wcout << L"This is a non blocking call!\n";

		rcFromExecutable = runExecutable->RunExecutable(currPath.wstring() + L"\\I-RAN - Controler.exe", currPath.wstring(), false);

		std::wcout << L"This is after the call!\n";
		std::wcout << L"We don't know what it returned cause we arn't even sure if it finished... so we just get a 0! See: " << rcFromExecutable << "\n\n";

		std::wcout << L"\nHit ENTER to enter next stage\n";

		std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

		std::wcout << L"This is a blocking call!\n";

		rcFromExecutable = runExecutable->RunExecutable(currPath.wstring() + L"\\I-RAN - Controler.exe", currPath.wstring(), true);

		std::wcout << L"This is after the call!\n";
		std::wcout << L"We know what it returned.. See: " << rcFromExecutable << "\n\n";

		std::wcout << L"\nHit ENTER to enter next stage\n";

		std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}

	std::wcout << L"This is a non blocking git call!\n";

	rcFromExecutable = gitWrapper->RunGitCommand(L"init", currPath.wstring() + L"\\temp\\T1", false);

	std::wcout << L"This is after the call!\n";
	std::wcout << L"We don't know what it returned cause we arn't even sure if it finished... so we just get a 0! See: " << rcFromExecutable << "\n\n";

	std::wcout << L"\nHit ENTER to enter next stage\n";

	std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::wcout << L"This is a blocking git call!\n";

	rcFromExecutable = gitWrapper->RunGitCommand(L"init", currPath.wstring() + L"\\temp\\T2", true);

	std::wcout << L"This is after the call!\n";
	std::wcout << L"We know what it returned.. See: " << rcFromExecutable << "\n\n";

	std::wcout << L"\nHit ENTER to exit\n";

	std::wcin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	return 0;
}

int main()
{
	IRAN::Controler::IRANControlerMain *appMain = new IRAN::Controler::IRANControlerMain;
	int rt = appMain->IRANEntryPoint();
	delete appMain;
	return rt;
}