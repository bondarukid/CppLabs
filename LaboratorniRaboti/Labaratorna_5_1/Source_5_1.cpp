/*
1.	�������� ��������, � ��� ������������ ���� Age � �������� �� ���� pAge.
������� ������ ������ ���������. �� ��������� ��������� ��������� �������� ���� ����� 25.
������� �������� ����� Age ����� ���������.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	int Age = 5;
	int* pAge = &Age;

	cout << "Age: " << Age << endl;
	cout << "pAge: " <<*pAge << endl << endl;

	*pAge = 25;

	cout << "Age: " << Age << endl;
	cout << "pAge: " << *pAge << endl << endl;

	system("pause");
	return 0;
}