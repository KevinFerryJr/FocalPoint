#pragma once

extern FocalPoint::Application* FocalPoint::CreateApplication();

int main(int argc, char** argv) {

	FocalPoint::Log::Init();

	FP_CORE_TRACE("Loading Program...");

	auto app = FocalPoint::CreateApplication();
	app->Run();
	delete app;
}