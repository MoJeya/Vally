#include <stdio.h>
#include <ClientSide.h>

class Sandbox : public Vally::Application {

public:
	Sandbox() {


	}

	~Sandbox() {

	}


};

Vally::Application* Vally::CreatApplication() {

	return new Sandbox();
}



