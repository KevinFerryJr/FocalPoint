#include "FocalPoint.h"

class FocalPointApp : public FocalPoint::Application {
public:
	FocalPointApp() {

	}

	~FocalPointApp() {

	}
};

FocalPoint::Application* FocalPoint::CreateApplication()
{
	return new FocalPointApp();
}