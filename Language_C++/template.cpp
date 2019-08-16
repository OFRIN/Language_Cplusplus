#include <iostream>
using namespace std;

#define SUM(a, b) (a + b)

inline int sum(int a, int b)
{
	return a + b;
}

int main()
{
	cout << sum(1, 5) << endl;
	cout << SUM(7, 9) << endl;

	system("pause");
	return 0;
}
