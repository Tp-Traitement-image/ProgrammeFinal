#pragma once
#include "controller.h"
#include "observer.h"
#include "view.h"

class ViewMenu: public view
{
private:
	Controller& controller;
public:
	/*
	Constructeur
	*/
	ViewMenu(Controller& _controller);

	/*
	Notifiaction en fonction de la vue
	*/
	virtual void notify();

	/*
	Afficher la vue
	*/
	virtual void display();
};

