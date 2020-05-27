#include "view.h"
#include <cstdlib>
#include <iostream>

view::view(const std::string& _title)
	:title(_title)
{

}

void view::clear() const
{
	system("CLS");
}

void view::display() const
{
	std::cout << title << std::endl << std::endl;
}