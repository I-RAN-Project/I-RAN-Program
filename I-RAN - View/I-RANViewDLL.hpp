#ifndef IRANVIEWDLL_HPP
#define IRANVIEWDLL_HPP

#ifdef DLL_EXPORTS
#define IRANMODELDLL_API __declspec(dllexport) 
#else
#define IRANMODELDLL_API __declspec(dllimport) 
#endif

#endif // IRANVIEWDLL_HPP
