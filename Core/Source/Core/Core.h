#pragma once
#ifdef FP_PLATFORM_WINDOWS 
#ifdef FP_BUILD_DLL
#define FOCALPOINT_API __declspec(dllexport)
#else
#define FOCALPOINT_API __declspec(dllimport)	
#endif
#else
#error Jiggle currently only supports Windows!
#endif

#define BIT(x) (1<<x) 