#include "..\Headers\GitWrapper.hpp"

IRAN::Model::Filesystem::GitWrapper::GitWrapper::GitWrapper() 
{
	runExecutable.ptr = boost::interprocess::unique_ptr<RunExecutablesImpl>(new RunExecutables);
}

IRAN::Model::Filesystem::GitWrapper::GitWrapper::~GitWrapper() {}

int IRAN::Model::Filesystem::GitWrapper::GitWrapper::RunGitCommand(std::wstring command, std::wstring enviroment, bool isBlocking)
{	
	boost::numeric::ublas::vector<std::wstring> t(1);
	t[0] = L"\"" + boost::filesystem::current_path().wstring() + L"\\GitPortable\\bin\\git.exe\" " + command + L"\n";

	return RunBashScript(t, enviroment, isBlocking);
}

int IRAN::Model::Filesystem::GitWrapper::GitWrapper::RunBashScript(boost::numeric::ublas::vector<std::wstring> commands, std::wstring enviroment, bool isBlocking)
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

	return runExecutable.ptr->RunExecutable(L"", L"cmd.exe /C " + boost::filesystem::current_path().wstring() + L"\\temp\\thisBashScript.bat", boost::filesystem::current_path().wstring(), isBlocking);
}

