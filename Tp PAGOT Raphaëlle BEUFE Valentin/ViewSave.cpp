#include "ViewSave.h"
#include <iostream>
#include <opencv2/opencv.hpp>

#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <opencv2/core/utility.hpp>

using namespace std;
using namespace cv;

ViewSave::ViewSave(Controller& _controller)
	: view("----------------------- Sauvegarde -----------------------"), controller(_controller)
{
	controller.addObserver(this);
}

void ViewSave::notify()
{
	if (controller.getCurrentScreen() == 1)
		display();
}

void ViewSave::display()
{
	clear();
	view::display();
	int save,ok;
	cout << "Voulez-vous enregistrer la nouvelle photo dans le disque D ?" << std::endl;
	cout << "oui (0) ou non (1)" << std::endl;
	cout << std::endl;
	
	do
	{
		ok = 0;
		cin >> save;
		switch (save)
		{
		case 0:
			ok = 0;
			break;
		case 1:
			ok = 0;
			break;
		default:
			ok = 1;
			cout << "CHIFFRE ERRONE" << std::endl;
			cout << "Ressaisissez :" << std::endl;
			break;
		}
	} while (ok == 1);

	//int res;
	cin.clear();
	//cin >> res;

	controller.setScreen(0);
}