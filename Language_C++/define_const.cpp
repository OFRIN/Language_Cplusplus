#include <iostream>
using namespace std;

#define DEFINE_A 5

int main()
{
	const int CONST_A = 5;
	int b = 10;

	// Error
	// printf("DEFIN_A = 0x%X\n", &DEFINE_A);

	printf("CONST_A = 0x%X\n", &CONST_A);

	system("pause");
	return 0;
}