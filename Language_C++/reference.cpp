#include <iostream>

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 3, b = 5;
	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);

	swap(a, b);
	printf("a = %d, b = %d\n", a, b);

	system("pause");
	return 0;
}

/*
a = 3, b = 5
a = 5, b = 3
a = 3, b = 5
*/