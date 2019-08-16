#include <iostream>

using namespace std;

class Player
{
private:
	int b;

public:
	int a;
};

class Ezreal : public Player
{
};

int main()
{
	Ezreal p;

	p.a;
	//a.b; // Error

	system("pause");
	return 0;
}