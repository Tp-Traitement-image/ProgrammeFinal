#pragma once
#include "subject.h"

class Controller : public subject
{
private:
	//ID de l'écran à afficher
	int currentScreen;

public:
	/*
	Constructeur
	*/
	Controller();

	/*
	Défini le nouvel écran à afficher
	*/
	void setScreen(const int& value);

	/*
	Retour l'ID de l'écran à afficher
	*/
	int getCurrentScreen();

	/*
	Récuperer la photo/l'image
	*/
};
