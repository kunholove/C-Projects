#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "A를 입력하세요 : ";
	cin >> a;

	cout << "B를 입력하세요 : ";
	cin >> b;

	cout << "A+B = " << a + b << "입니다." << endl;

	cout << "" << endl;

	cout << "16진수로 나타내면" << endl;
	cout << hex << a+b << endl;

	cout << "8진수로 나타내면" << endl;
	cout << oct << a+b << endl;

}