#pragma once
#include "subject.h"

class Controller : public subject
{
private:
	//ID de l'�cran � afficher
	int currentScreen;

public:
	/*
	Constructeur
	*/
	Controller();

	/*
	D�fini le nouvel �cran � afficher
	*/
	void setScreen(const int& value);

	/*
	Retour l'ID de l'�cran � afficher
	*/
	int getCurrentScreen();

	/*
	R�cuperer la photo/l'image
	*/
};
