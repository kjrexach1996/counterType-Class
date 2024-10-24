// counterType Class.cpp : This file provides the implementation details for the counterType class.
// Member functions access and update the count member as they are called. Errors arise should the value
// used to update the count member variable is negative.

#include <iostream>
#include "counterType.h"

using namespace std;

void counterType::setCounter(int num)
{
	if (num < 0)
		cout << "Counter cannot be set to less than 0." << endl;
	else
		count = num;
}

void counterType::resetCounter()
{
	count = 0;
}

int counterType::getCounter()
{
	return count;
}

void counterType::increaseCounter() 
{
	count++;
}

void counterType::decreaseCounter()
{
	if (count == 0)
		cout << "Counter cannot be set to less than 0." << endl;
	else
		count--;
}

void counterType::printCounter()
{
	cout << count;
}

counterType::counterType()
{
	resetCounter();
}

counterType::counterType(int num)
{
	setCounter(num);
}



