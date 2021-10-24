#include <iostream>
using namespace std;

int main()
{
	int Mask = 0;

	cout << "Netmask: 255.255.255.*" << endl
		<< "Enter * : ";
	cin >> Mask;
	cout << endl;

	switch (Mask)
	{
	case 255: cout << "Number of available ip-addresses: 1" << endl;
		break;
	case 254: cout << "Number of available ip-addresses: 2" << endl;
		break;
	case 252: cout << "Number of available ip-addresses: 4" << endl;
		break;
	case 248: cout << "Number of available ip-addresses: 8" << endl;
		break;
	case 240: cout << "Number of available ip-addresses: 16" << endl;
		break;
	case 224: cout << "Number of available ip-addresses: 32" << endl;
		break;
	case 192: cout << "Number of available ip-addresses: 64" << endl;
		break;
	case 128: cout << "Number of available ip-addresses: 128" << endl;
		break;
	case 000: cout << "Number of available ip-addresses: 256" << endl;
		break;
	default: cout << "Wrong number, please try again)" << endl;
		break;
	}
}
