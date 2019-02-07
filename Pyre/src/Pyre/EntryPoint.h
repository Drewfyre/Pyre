#pragma once

#ifdef PY_PLATFORM_WINDOWS
	
extern Pyre::Application* Pyre::CreateApp();

int main(int argc, char** args) {
	Pyre::Log::Init();
	auto app = Pyre::CreateApp();
	app->Run();
	delete app;
}

#endif // PY_PLATFORM_WINDOWS

