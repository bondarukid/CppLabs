/*
1.	Описати функцію Sign (X) цілого типу, яка повертає для дійсного числа X наступні значення: -1, якщо X <0; 0,
якщо X = 0; 1, якщо X> 0. За допомогою цієї функції знайти значення виразу Sign (A) + Sign (B) для даних дійсних чисел A і B.
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