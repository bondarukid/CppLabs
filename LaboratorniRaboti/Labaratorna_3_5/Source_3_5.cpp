/*
1.	������� ������� Calc (A, B, Op) ������� ����, �� ������ ��� ����������� ������� ������� A �� B ���� � ������������ �������� �
������� �� ���������. ��� �������� ����������� ����� ���������� Op: 1 - ��������, 2 - ��������, 3 - ������, ���� �������� - ���������.
�� ��������� Calc �������� ��� ����� A � B ��������, �� ������������ ������ ������ N1, N2, N3.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int Calc(int A, int B, int Op)
{
	if (A != 0 && B != 0)
	{
		switch (Op)
		{
		case 1:
			return A - B;
			break;
		case 2:
			return A * B;
			break;
		case 3:
			return A / B;
			break;
		default:
			return A + B;
			break;
		}
	}
}

double Calc(double A, double B, int Op)
{
	if (A != 0 && B != 0)
	{
		switch (Op)
		{
		case 1:
			return A - B;
			break;
		case 2:
			return A * B;
			break;
		case 3:
			return A / B;
			break;
		default:
			return A + B;
			break;
		}
	}
}

int main() {

	int N1, N2, N3 = 0;

	cout << "Enter N1: ";
	cin >> N1;
	cout << "Enter N2: ";
	cin >> N2;
	cout << "Enter N3(Op): ";
	cin >> N3;

	cout << Calc(N1,N2,N3) << endl;

	system("pause");
	return 0;
}