#include <iostream>

using namespace std;

int main()
{
	int dec1 = 23, dec2 = 230;


	cout << "10진수" << endl;
	cout << "A = " << dec1 << endl;
	cout << "B = " << dec2 << endl;

	cout << "" << endl;

	cout << "16진수" << endl;
	cout << "A = " << hex << dec1 << endl;
	cout << "B = " << hex << dec2 << endl;
	
	cout << "" << endl;

	cout << "8진수" << endl;
	cout << "A = " << oct << dec1 << endl;
	cout << "B = " << oct << dec2 <<  endl;

}