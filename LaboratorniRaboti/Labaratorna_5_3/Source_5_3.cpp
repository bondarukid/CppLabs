/*
3.	�������� ��������, � ��� ����������� ��� ��'���� ������� ���� ������� ��� �������� � ����� ���'��; ������ �� �������� � ������;
������� �ᒺ� ������� �����; ����������� �������� ���������� ���� ������� ��������.
�����! ϳ��� ��������� ���������� ������� ������ �� �ᒺ���.
*/
#include<iostream>
#include<Windows.h>
#include <vector>
using namespace std;

int main() {

	int *stud = new int[3];
	int summ = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "Student mark " << i + 1 << " - ";
		cin >> stud[i];
	}

	for (int i = 0; i < 3; i++)
	{
		int* p = &stud[i];
		cout << "Mark: " << stud[i] << " Memory: " << sizeof(p) << endl;
		summ += sizeof(p);
	}
	delete stud;
	stud = nullptr;

	system("pause");
	return 0;
}