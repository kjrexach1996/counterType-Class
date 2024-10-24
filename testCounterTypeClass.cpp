

#include <iostream>
#include "counterType.h"

using namespace std;

int main()
{
	counterType myCounter;
	counterType yourCounter(5);

	//Creating a counterType object using default constructor
	cout << "counterType object created with default constructor (counterType myCounter();): " << endl
		 << "myCounter: ";
	myCounter.printCounter();
	cout << endl << endl;

	//Creating a counterType object using a POSITIVE user-supplied integer
	cout << "counterType object created with a positive user-supplied integer (counterType yourCounter(5);): " << endl
		<< "yourCounter: ";
	yourCounter.printCounter();
	cout << endl << endl;

	//Creating a counterType object using a NEGATIVE user-supplied integer
	cout << "counterType object created with a negative user-supplied integer (counterType negCounter(-5);): " << endl
	     << "negCounter: ";
	counterType negCounter(-5);
	cout << endl;

	//Changing value stored in counterType object using setCounter();
	cout << "Changing value of myCounter to 10: " << endl;
	myCounter.setCounter(10);
	cout << "myCounter: ";
	myCounter.printCounter();
	cout << endl << endl;

	//Increment counter by 1
	cout << "Incrementing myCounter by 1:" << endl;
	myCounter.increaseCounter();
	cout << "myCounter: ";
	myCounter.printCounter();
	cout << endl << endl;

	//Decrement counter by 1
	cout << "Decrementing myCounter by 1:" << endl;
	myCounter.decreaseCounter();
	cout << "myCounter: ";
	myCounter.printCounter();
	cout << endl << endl;

	//Resetting counter to 0
	cout << "Resetting myCounter back to 0:" << endl;
	myCounter.resetCounter();
	cout << "myCounter: ";
	myCounter.printCounter();
	cout << endl << endl;

	//Decrementing counter after resetting
	cout << "Attempting to decrease myCounter to less than 0 after being reset:" << endl;
	myCounter.decreaseCounter();
	cout << "myCounter: ";
	myCounter.printCounter();
	cout << endl << endl;
}