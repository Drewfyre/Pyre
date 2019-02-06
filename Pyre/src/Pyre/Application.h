#pragma once

#include "Core.h"

namespace Pyre {

	class PYRE_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApp();
}