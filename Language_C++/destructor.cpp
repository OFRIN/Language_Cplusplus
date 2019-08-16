#include <iostream>

using namespace std;

class Sample
{
public:
	Sample()
	{
		cout << "Sample !!" << endl;
	}

	~Sample()
	{
		cout << "Delete Sample !!" << endl;
	}
};

int main()
{
	{
		Sample sample;
	}

	system("pause");
	return 0;
}