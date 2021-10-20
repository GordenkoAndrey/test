#include <iostream>
using namespace std;

int main()
{
	int star = 0;

	cout << "Enter please number: ";
	cin >> star;
	cout << endl;

	for (int i = 0; i < star; i++)
	{
		cout << "*";
	}
	cout << endl;
}