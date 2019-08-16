#include <iostream>

namespace AAA
{
	void print()
	{
		std::cout << "AAA" << std::endl;
	}
}

namespace BBB
{
	void print()
	{
		std::cout << "BBB" << std::endl;
	}
}

using namespace std;
using namespace AAA;

int main()
{
	print();
	BBB::print();

	system("pause");
	return 0;
}