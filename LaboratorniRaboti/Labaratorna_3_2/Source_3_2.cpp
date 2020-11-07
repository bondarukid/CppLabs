/*
1.	������� ������� Sign (X) ������ ����, ��� ������� ��� ������� ����� X ������� ��������: -1, ���� X <0; 0,
���� X = 0; 1, ���� X> 0. �� ��������� ���� ������� ������ �������� ������ Sign (A) + Sign (B) ��� ����� ������ ����� A � B.
*/
#include<iostream>
#include<Windows.h>

using namespace std;

int Sign(double X)
{
	if (X < 0)
	{
		return -1;
	}
	else if (X == 0)
	{
		return 0;
	}
	else if (X > 0)
	{
		return 1;
	}
}

int main() {

	double A, B = 0.0;

	cout << "Enter Sign(A): ";
	cin >> A;
	cout << "Enter Sign(B): ";
	cin >> B;
	cout << Sign(A) + Sign(B);

	system("pause");
	return 0;
}