#include <iostream>

using namespace std;

int main()
{
	int num = 0;
	int a = 0;

	cout << "Enter number: ";
	cin >> num;
	cout << endl;

	while (a < num)
	{
		cout << a << ", ";
		a++;
	}
	cout << a++<< "." << endl;
}
