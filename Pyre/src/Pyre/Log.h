#pragma once

#include <memory.h>
#include "Core.h"
#include "spdlog\spdlog.h"

namespace Pyre {

	class PYRE_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return mCoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return mClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> mCoreLogger;
		static std::shared_ptr<spdlog::logger> mClientLogger;
	};

}


#define PY_CORE_TRACE(...)	::Pyre::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define PY_CORE_INFO(...)	::Pyre::Log::GetCoreLogger()->info(__VA_ARGS__)
#define PY_CORE_WARN(...)	::Pyre::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define PY_CORE_ERROR(...)	::Pyre::Log::GetCoreLogger()->error(__VA_ARGS__)
#define PY_CORE_FATAL(...)	::Pyre::Log::GetCoreLogger()->fatal(__VA_ARGS__)

#define PY_TRACE(...)		::Pyre::Log::GetClientLogger()->trace(__VA_ARGS__)
#define PY_INFO(...)		::Pyre::Log::GetClientLogger()->info(__VA_ARGS__)
#define PY_WARN(...)		::Pyre::Log::GetClientLogger()->warn(__VA_ARGS__)
#define PY_ERROR(...)		::Pyre::Log::GetClientLogger()->error(__VA_ARGS__)
#define PY_FATAL(...)		::Pyre::Log::GetClientLogger()->fatal(__VA_ARGS__)
