#pragma once

#include <memory>

#include "spdlog/spdlog.h"
#include "spdlog/fmt/ostr.h"

namespace FocalPoint {

	class Log
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	};
}

// Core log definitions
#define FP_CORE_TRACE(...)  ::FocalPoint::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define FP_CORE_INFO(...)   ::FocalPoint::Log::GetCoreLogger()->info(__VA_ARGS__)
#define FP_CORE_WARN(...)   ::FocalPoint::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define FP_CORE_ERROR(...)  ::FocalPoint::Log::GetCoreLogger()->error(__VA_ARGS__)
#define FP_CORE_FATAL(...)  ::FocalPoint::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log definitions
#define FP_TRACE(...)       ::FocalPoint::Log::GetClientLogger()->trace(__VA_ARGS__)
#define FP_INFO(...)        ::FocalPoint::Log::GetClientLogger()->info(__VA_ARGS__)
#define FP_WARN(...)        ::FocalPoint::Log::GetClientLogger()->warn(__VA_ARGS__)
#define FP_ERROR(...)       ::FocalPoint::Log::GetClientLogger()->error(__VA_ARGS__)
#define FP_FATAL(...)       ::FocalPoint::Log::GetClientLogger()->fatal(__VA_ARGS__)
