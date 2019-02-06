#pragma once

#ifdef PY_PLATFORM_WINDOWS
	#ifdef PY_BUILD_DLL
		#define PYRE_API __declspec(dllexport)
	#else
		#define PYRE_API __declspec(dllimport)	
	#endif
#else
#error Only supports windows.
#endif