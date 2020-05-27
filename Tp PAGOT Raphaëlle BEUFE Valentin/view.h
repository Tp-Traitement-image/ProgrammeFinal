#pragma once
#include <string>
#include "observer.h"

class view: public observer
{
private:
	std::string title;

public:
	view(const std::string& _title);

	void clear() const;

	virtual void display() const;
};

