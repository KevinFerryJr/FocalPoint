#pragma once

extern FocalPoint::Application* FocalPoint::CreateApplication();

int main(int argc, char** argv) {

	FocalPoint::Log::Init();

	FP_CORE_INFO("Loading Program...");
	FP_CORE_WARN("Program not found!");

	auto app = FocalPoint::CreateApplication();
	app->Run();
	delete app;
}