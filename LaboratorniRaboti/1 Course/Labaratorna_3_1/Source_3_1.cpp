/*
1.	������� ������� PowerA3 (A, B), ��� �������� ����� ������ ����� A � ������� �� � ����� B (A - �������, B - �������� ��������; ������ ��������� � �������).
�� ��������� ���� ������� ������ ���� ������ �'��� ����� �����.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

double PowerA3(double A)
{
	double B = 0.0;

	B = 3 * A;

	return B;
}

int main() {
	double A, B = 0.0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter A: ";
		cin >> A;
		cout << PowerA3(A) << endl;
	}

	system("pause");
	return 0;
}