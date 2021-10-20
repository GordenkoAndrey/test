#include <iostream>

using namespace std;

int main()
{
	int star = 0;

	cout << "Enter number: ";
	cin >> star;

	for (int a = 0; a != star;)
	{
		for (int b = 0; b < star; b++)
		{
			cout << "*";
		}
		cout << endl;
		star--;
	}
}
