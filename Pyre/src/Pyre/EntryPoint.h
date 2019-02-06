#pragma once

#ifdef PY_PLATFORM_WINDOWS
	
extern Pyre::Application* Pyre::CreateApp();

int main(int argc, char** args) {
	printf("Engine staato!");
	auto app = Pyre::CreateApp();
	app->Run();
	delete app;
}

#endif // PY_PLATFORM_WINDOWS

