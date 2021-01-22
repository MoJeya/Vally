#pragma once
#ifdef HZ_PLATFORM_WINDOWS
//das wird von ausen kierent
extern Vally::Application* Vally::CreatApplication();

int main(int argc, char** argv) {
	printf("Vally Engien is Running\n");
	auto app = Vally::CreatApplication();
	app->Run();
	delete app;

}

#endif