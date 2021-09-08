/*
1.	Описати функцію Power1 (A, B) дійсного типу, яка знаходить величину AB за формулою AB = exp (B · ln (A)) (параметри A і B - дійсні).
У разі нульового або негативного параметра A функція повертає 0. З допомогою цієї функції знайти степені AP, BP, CP, якщо дано числа P, A, B, C.
*/
#include<iostream>
#include<Windows.h>
#include<math.h>

using namespace std;

double Power1(double A, double B)
{
	if (A <= 0)
	{
		return 0;
	}
	else
	{
		return exp(B * log10(A));
	}
}

int main() {

	double P = 0.0;
	double A = 0.0;
	double B = 0.0;
	double C = 0.0;

	cout << "Enter P: ";
	cin >> P;
	cout << "Enter A: ";
	cin >> P;
	cout << "Enter B: ";
	cin >> P;
	cout << "Enter C: ";
	cin >> P;

	cout << "AP: " << Power1(A, P) << endl;
	cout << "BP: " << Power1(B, P) << endl;
	cout << "CP: " << Power1(C, P) << endl;
	system("pause");
	return 0;
}