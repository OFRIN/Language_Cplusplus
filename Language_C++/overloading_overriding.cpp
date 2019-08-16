#include <iostream>

// function Ezreal.attack is overriding
// function Ezreal.Q is overloading

using namespace std;

class Player
{
public:
	int a;

	virtual void attack() = 0;
};

class Ezreal : public Player
{
public:
	void attack()
	{
		cout << "Ezreal !!" << endl;
	}

	void Q()
	{

	}

	void Q(int damage)
	{
		cout << damage << endl;
	}
};

int main()
{
	Ezreal p;
	p.attack();

	system("pause");
	return 0;
}