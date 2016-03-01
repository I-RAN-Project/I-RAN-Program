#ifndef RunExecutable_Hpp
#define RunExecutable_Hpp

#include <cstdlib>
#include <string>

#include <iostream>
#include <boost/filesystem.hpp>

#include <tchar.h>
#include <Windows.h> 

namespace IRAN
{
	namespace Controller
	{
		namespace Filesystem
		{				
			class RunExecutablesImpl
			{
			public:
				//For proper cleanup...
				virtual ~RunExecutablesImpl() {};

				virtual int RunExecutable(std::wstring executable, std::wstring enviroment, bool isBlocking) = 0;
				virtual int RunExecutable(std::wstring executable, std::wstring arguments, std::wstring enviroment, bool isBlocking) = 0;
			private:

			};

			class RunExecutables : public RunExecutablesImpl
			{
			public:
				RunExecutables();
				~RunExecutables();

				int RunExecutable(std::wstring executable, std::wstring enviroment, bool isBlocking);
				int RunExecutable(std::wstring executable, std::wstring arguments, std::wstring enviroment, bool isBlocking);
			private:

			};
		}
	}
}

#endif // RunExecutable_Hpp
