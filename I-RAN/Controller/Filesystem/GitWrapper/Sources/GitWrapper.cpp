#include "../Headers/GitWrapper.hpp"

IRAN::Controller::Filesystem::GitWrapper::GitWrapper::GitWrapper()
{
	ptr = boost::interprocess::unique_ptr<RunExecutablesImpl>(new RunExecutables);
}

IRAN::Controller::Filesystem::GitWrapper::GitWrapper::~GitWrapper() {}

/*
 * We return what the bash script exits with not what git exits with on blocking mode
 * So you will probably get a 0 anyways.
 * Unless they close CMD.exe
 * But why would they do dat?
 */
int IRAN::Controller::Filesystem::GitWrapper::GitWrapper::RunGitCommand(std::wstring command, std::wstring enviroment, bool isBlocking)
{	
	boost::numeric::ublas::vector<std::wstring> t(1);
	t[0] = L"\"" + boost::filesystem::current_path().wstring() + L"\\GitPortable\\bin\\git.exe\" " + command + L"\n";

	return RunBashScript(t, enviroment, isBlocking);
}

int IRAN::Controller::Filesystem::GitWrapper::GitWrapper::RunBashScript(boost::numeric::ublas::vector<std::wstring> commands, std::wstring enviroment, bool isBlocking)
{
	std::wfstream batfile(L"temp\\thisBashScript.bat", std::fstream::out);

	if (!batfile)
	{
		std::wcerr << L"Could not open file.\n";
		return -1;
	}

	batfile << L"cd " << enviroment << L"\n";

	foreach_b_(std::wstring thisCommand, commands)
	{
		batfile <<  thisCommand << L"\n";
	}

	batfile.close(); //... Close is a C++ Standard Library, this only shows that either A: Microsoft failed to implement their standard C++ libraries OR B: Microsoft's Intellisense is crap. 

	return ptr->RunExecutable(L"", L"cmd.exe /C " + boost::filesystem::current_path().wstring() + L"\\temp\\thisBashScript.bat", boost::filesystem::current_path().wstring(), isBlocking);
}

