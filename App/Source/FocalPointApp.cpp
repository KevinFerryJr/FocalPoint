#include "FocalPoint.h"

class SpringBox : public FocalPoint::Application {
public:
	SpringBox() {

	}

	~SpringBox() {

	}
};

FocalPoint::Application* FocalPoint::CreateApplication()
{
	return new SpringBox();
}