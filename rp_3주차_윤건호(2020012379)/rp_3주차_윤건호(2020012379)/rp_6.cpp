#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "A�� �Է��ϼ��� : ";
	cin >> a;

	cout << "B�� �Է��ϼ��� : ";
	cin >> b;

	cout << "A+B = " << a + b << "�Դϴ�." << endl;

	cout << "" << endl;

	cout << "16������ ��Ÿ����" << endl;
	cout << hex << a+b << endl;

	cout << "8������ ��Ÿ����" << endl;
	cout << oct << a+b << endl;

}