#pragma once
#include <vector>
#include "observer.h"

class subject
{
private:
	//Collection of observers
	std::vector<observer*> Observers;
public:
	/**
	 * Constructor
	 */
	subject();

	/**
	 * Adds an observer to the collection
	 * @param observer: Observer to add
	 */
	void addObserver(observer* Observer);

	/**
	 * Notifies all the observers of the subject
	 */
	void notify();
};

