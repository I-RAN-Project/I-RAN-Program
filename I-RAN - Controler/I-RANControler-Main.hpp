#ifndef IRANCONTROLER_MAIN_HPP
#define IRANCONTROLER_MAIN_HPP

#define WINDOWS_LEAN_AND_MEAN
#define NOMINMAX

#include <limits>

#define BOOST_FILESYSTEM_NO_DEPRECATED
#include "Filesystem\GitWrapper\Headers\GitWrapper.hpp"

namespace IRAN
{
	namespace Controler
	{
		class IRANControlerMain
		{
		public:
			IRANControlerMain();
			~IRANControlerMain();

			int IRANEntryPoint();
		private:
			IRAN::Model::Filesystem::RunExecutablesImpl *runExecutable;
			IRAN::Model::Filesystem::GitWrapper::GitWrapperImpl *gitWrapper;
			boost::filesystem::path currPath;
		};
	}
}

#endif // IANCONTROLER_MAIN_HPP