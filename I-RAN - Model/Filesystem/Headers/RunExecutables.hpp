#ifndef RunExecutable_HPP
#define RunExecutable_HPP

#include "..\..\I-RANModelDLL.hpp"

#include <cstdlib>
#include <string>

#include <iostream>
#include <boost\filesystem.hpp>

#include <tchar.h>
#include <Windows.h> 

namespace IRAN
{
	namespace Model
	{
		namespace Filesystem
		{				
			class IRANMODELDLL_API RunExecutablesImpl
			{
			public:
				//For proper cleanup...
				virtual ~RunExecutablesImpl() {};

				virtual int RunExecutable(std::wstring, std::wstring, bool) = 0;
				virtual int RunExecutable(std::wstring, std::wstring, std::wstring, bool) = 0;
			private:

			};

			class IRANMODELDLL_API RunExecutables : public RunExecutablesImpl
			{
			public:
				RunExecutables();
				~RunExecutables();

				int RunExecutable(std::wstring, std::wstring, bool);
				int RunExecutable(std::wstring, std::wstring, std::wstring, bool);
			private:

			};
		}
	}
}

#endif // RunExecutable_HPP
