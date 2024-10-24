//counterType.h: specification file for the class counterType

class counterType
{
public:
	void setCounter(int number);

	void resetCounter();

	int getCounter();

	void increaseCounter();

	void decreaseCounter();

	void printCounter();

	counterType();

	counterType(int number);

private:
	int count;
};
