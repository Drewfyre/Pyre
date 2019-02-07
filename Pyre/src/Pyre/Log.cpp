#include "Log.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Pyre {

	std::shared_ptr<spdlog::logger> Log::mCoreLogger;
	std::shared_ptr<spdlog::logger> Log::mClientLogger;

	void Log::Init()
	{
		spdlog::set_pattern("%^[%T] %n: %v%$");
		mCoreLogger = spdlog::stdout_color_mt("PYRE");
		mCoreLogger->set_level(spdlog::level::trace);
		mClientLogger = spdlog::stdout_color_mt("CLIENT");
		mClientLogger->set_level(spdlog::level::trace);
	}

}