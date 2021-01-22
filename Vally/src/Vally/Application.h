#pragma once

#include "Core.h"

namespace Vally {

	class _declspec(dllexport) Application
	{
	public:
		Application();
		virtual ~Application();
		//Diese Methode dient als gameloop
		void Run();
	};

	Application* CreatApplication();

}


