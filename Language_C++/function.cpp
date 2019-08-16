#include <iostream>
using namespace std;

int sum(int a, int b = 5)
{
	return a + b;
}

/*
// Error
int sum(int a = 3, int b)
{
	return a + b;
}
*/

int main()
{
	cout << sum(3, 5) << endl;
	cout << sum(10) << endl;
	
	system("pause");
	return 0;
}
