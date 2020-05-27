#include "application.h"

application::application()
	: controller(), viewMenu(controller), viewSave(controller)
{
}

void application::run()
{
	controller.notify();
}