#pragma once
#include "controller.h"
#include "observer.h"
#include "view.h"

class ViewSave : public view
{
private:
	Controller& controller;
public:
	ViewSave(Controller& _controller);
	virtual void notify();
	virtual void display();
};

