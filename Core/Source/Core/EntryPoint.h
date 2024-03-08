#pragma once

extern FocalPoint::Application* FocalPoint::CreateApplication();

int main(int argc, char** argv) {

	auto app = FocalPoint::CreateApplication();
	app->Run();
	delete app;
}