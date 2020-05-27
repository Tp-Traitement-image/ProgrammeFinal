#include "ViewMenu.h"
#include "Filtres.h"

#include <iostream>
#include <opencv2/opencv.hpp>


using namespace std;
using namespace cv;

ViewMenu::ViewMenu(Controller& _controller)
	: view(" ----------------------- MENU -----------------------"), controller(_controller)
{
	controller.addObserver(this);
}

void ViewMenu::notify()
{
	if (controller.getCurrentScreen() == 0)
		display();
}

void ViewMenu::display()
{
	clear();
	view::display();

    int choix;
    
    cout << "Choisissez le traitement de l'image :" << endl << endl;
    cout << "1. Filtrage :" << endl;
    cout << "       11. Filtre median" << endl;
    cout << "       12. Filtre gaussien" << endl << endl;
    cout << "2. Derivation (calcul du gradient)" << endl << endl;
    cout << "3. Operation de morphologie mathematique :" << endl;
    cout << "       31. Dilatation" << endl;
    cout << "       32. Erosion" << endl << endl;
    cout << "4. Detection de contours (Canny)" << endl << endl;
    cout << "5. Segmentation de l'image :" << endl;
    cout << "       51. Operations de seuillages" << endl;
    cout << "       52. Segmentation par croissance de region" << endl << endl;
    cout << "0. Quitter" << endl << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;
    cout << "Votre choix : ";
    cin >> choix;
    cout << endl;

    String ImOriginale = "Image originale";
    Mat imageRGB = imread("D:/photo.jpg");
    Mat image;
    cvtColor(imageRGB, image, COLOR_RGB2GRAY);
    switch (choix)
    {
    case 0:
        cin.clear();
        break;

    case 11:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 12:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 2:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 31:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 32:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 4:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 51:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    case 52:
        namedWindow(ImOriginale, WINDOW_NORMAL);
        imshow(ImOriginale, imageRGB);
        cout << "Appuyer sur 0 pour continuer" << std::endl;
        waitKey(0);
        destroyAllWindows();
        cin.clear();
        controller.setScreen(1);
        break;

    default: cout << "Chiffre non prevu";
    }
	
}