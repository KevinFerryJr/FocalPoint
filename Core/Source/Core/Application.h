#pragma once

namespace FocalPoint {

	class Application {
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();
}