// counterType Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	count = 0;
}

counterType::counterType(int num)
{
	setCounter(num);
}



