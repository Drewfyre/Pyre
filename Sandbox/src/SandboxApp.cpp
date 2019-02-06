#include <Pyre.h>

class SandboxApp : public Pyre::Application {
public:
	SandboxApp() {

	}

	~SandboxApp() {

	}
};

Pyre::Application* Pyre::CreateApp() {
	return new SandboxApp();
}