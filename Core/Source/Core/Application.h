#pragma once

#include "Events/Event.h"

namespace FocalPoint {

	class Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}