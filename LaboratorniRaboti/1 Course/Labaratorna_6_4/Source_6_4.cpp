/*
4.	������� ��� �������:
1)	��� ������� ��'��� ������ ���� � ����� ���'�� � ������� � ����� ���������� ��� ��'���. �������� ��.
2)	��� ������� ��'��� ������ ���� � ����� ���'�� � ������� � ����� ���������� ��������� �� ��'���. �������� ��.
3)	��� ������� ��'��� ������ ���� � ����� ���'�� � ������� � ����� ���������� ������ ��'����. �������� ��.
��������, �� ����� ������� �������� �������, ���� �ᒺ�� ����������� � �����. ������ ��������.

*/

#include<iostream>
#include<Windows.h>

using namespace std;

int A()
{
	int *result = new int;

	return *result;
}

int B()
{
	int* result = new int;
	int& pResult = *result;
	return pResult;
}

int C()
{
	int* result = new int;
	return *result;
}

int main() {

	cout << A() << endl;
	cout << B() << endl;
	cout << C() << endl;
	system("pause");
	return 0;
}