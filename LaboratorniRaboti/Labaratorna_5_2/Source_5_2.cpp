/*
2.	�������� ��������, � ��� ������������ ���������� ������� ���� Num � �������� �� �����  pNum. ������� ������ ������ ���������.
������� �� ����� �������� ������ � ������ ����� ����� � ���������������� � ��������� ������ ��������.
��������� ������� ����������. ������ ��������.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	unsigned int Num = 653;
	unsigned int* pNum = &Num;

	cout << "Num = " << Num << endl;
	cout << "pNum = " << *pNum << endl << endl;

	cout << "Num = " << &Num << endl;
	cout << "pNum = " << pNum << endl << endl;

	cout << "Num = " << (unsigned long)Num << endl;
	cout << "pNum = " << (unsigned long)*pNum << endl;

	cout << "Num = " << (unsigned long)&Num << endl;
	cout << "pNum = " << (unsigned long)pNum << endl << endl;

	system("pause");
	return 0;
}