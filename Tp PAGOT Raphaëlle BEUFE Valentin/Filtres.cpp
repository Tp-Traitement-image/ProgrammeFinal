#include "Filtres.h"

Mat Filtres::Gaussien(Mat image)
{
	GaussianBlur(image, image, Size(3, 3), 0, 0, BORDER_DEFAULT);
	return image;
}