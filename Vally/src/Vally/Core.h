#pragma once

#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define VALLY_API _declspec(dllexport)
	#else
		#define VALLY_API _declspec(dllimport)
	#endif
#else
	#error Vally only supports Windows
#endif // 0
