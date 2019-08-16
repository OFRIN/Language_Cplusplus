#include <iostream>

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
};

int main()
{
	Ezreal p;
	p.attack();

	system("pause");
	return 0;
}