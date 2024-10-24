//counterType.h: specification file for the class counterType

class counterType
{
public:

	//counterType object must exist to update count member; user-supplied input must be
	//a nonnegative integer; an error occurs otherwise.
	//Function updates count member in counter object to the user-supplied parameter.
	void setCounter(int number);

	//counterType object must exist to update count member.
	//Function simulates a counter reset by setting the count member to 0.
	void resetCounter();

	//counterType object must exist to access count member.
	//Function returns the value of the count member variable.
	int getCounter();

	//counterType object must exist to update count member.
	//Function increases the value of the count member variable by 1.
	void increaseCounter();

	//counterType object must exist to update count member; function prints an error
	//message if count member value equals 0 to prevent counter from counting to less than 0.
	//Function decreases the value of the count member variable by 1.
	void decreaseCounter();

	//counterType object must exist to access count member.
	//Function accesses count member and displays value to the user. 
	void printCounter();

	//Creates a counterType object with a default parameter of 0.
	counterType();

	//Function expects to receive an integer supplied by the user; if a negative number is 
	//provided, an error message will appear through the setCounter() function.
	//Creates a counterType object with a user-supplied parameter.
	counterType(int number);

private:

	//Count member represents nonnegative integer
	int count;
};
