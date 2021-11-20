#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double num1, num2;

	cout << "변수 num1의 값을 입력하세요. : ";

	cin >> num1;

	cout << "num1의 값은 " << (int)num1 << "입니다." << endl;

	cout << "변수 num2의 값을 입력하세요. : ";

	cin >> num2;

	cout << "num2의 값은 " << num2 << "입니다." << endl;

	cout << "변수 num3에 num2의 값을 넣습니다." << endl;

	cout << "num3의 값은 " << (int)num2 << "입니다." << endl;

}