/*
* ���� ����� ����� A � ���� ����� N (> 0). ������ A � ������ N:
AN = A � A � ... � A
(����� A �������������� N ���).

*/
#include <iostream>
#include <string>

using namespace std;

double Exp(double A, int N)
{
	double result = 1;

	for (int i = 0; i < N; i++)
	{
		result *= A;
	}

	return result;
}

int main()
{
	double A = 0.0;
	int N = 0;

	cout << "Enter A(double): ";
	cin >> A;

	cout << "Enter N(exp): ";
	cin >> N;

	cout << Exp(A, N);
	system("pause");
	return 0;
}