#pragma once

namespace Pyre {

	class __declspec(dllexport) Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};
}