/*
1.	������� ��'��� ������ ���� � �����. ������� ��������� � �������� �� �����.
������ �������� � ������.
�������� �������� �� 5 �� ��������� ���������.
������� �������� ����� ��'���� �� ��������� ��������� �� ���������.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int main() {

	int Value = 0;
	int* pValue = &Value;
	int& ppValue = *pValue;

	cout << "Enter a number: ";
	cin >> Value;

	ppValue += 5;

	cout << "Reference: " << ppValue << endl;
	cout << "Vkazivka: " << *pValue << endl;

	system("pause");
	return 0;
}