#pragma once
#include "Controller.h"
#include "ViewMenu.h"
#include "ViewSave.h"

class application
{
private:
	Controller controller;
	ViewMenu viewMenu;
	ViewSave viewSave;

public:
	application();

	void run();
};

