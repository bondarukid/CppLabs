/*
1.	Описати функцію PowerA3 (A, B), яка обчислює третю степінь числа A і повертає її в змінній B (A - вхідний, B - вихідний параметр; обидва параметри є дійсними).
За допомогою цієї функції знайти треті ступені п'яти даних чисел.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

double PowerA3(double A)
{
	double B = 0.0;

	B = 3 * A;

	return B;
}

int main() {
	double A, B = 0.0;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter A: ";
		cin >> A;
		cout << PowerA3(A) << endl;
	}

	system("pause");
	return 0;
}