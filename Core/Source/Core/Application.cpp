#include "fppch.h"
#include "Application.h"

#include "Events/ApplicationEvent.h"
#include "Log.h"


namespace FocalPoint {
	Application::Application() {

	}

	Application::~Application() {

	}

	void Application::Run() {
		
		WindowResizeEvent e(1280, 720);
		FP_TRACE(e);

		while (true);
	}
}