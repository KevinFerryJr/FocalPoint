#pragma once
#ifdef FP_PLATFORM_WINDOWS 
	
//          Dynamic linking not configured!
// #-------------------------------------------------#
//	#ifdef FP_BUILD_DLL
//		#define FOCALPOINT_API __declspec(dllexport)
//	#else
//		#define FOCALPOINT_API __declspec(dllimport)	
//	#endif
// #-------------------------------------------------#

#else
	#error Jiggle currently only supports Windows!
#endif

#ifdef FP_ENABLE_ASSERTS
	#define FP_ASSERT(x, ...) {if(!(x)) {FP_ERROR("Assertion Failed: {0}", __VA_ARGS); __debugbreak();}}
	#define FP_CORE_ASSERT(x, ...) {if(!(x)) {FP_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS); __debugbreak();}}
#else
	#define FP_ASSERT(x, ...)
	#define FP_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1<<x) 