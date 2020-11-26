/*
5.	Опишіть функцію Power23(N, N2, N3) для пошуку квадрату і куба даного цілого числа   N, яка не повертає результат.
Увага! Передачу параметрів N2 і N3 забезпечити за вказівкою.
За допомогою функції Power23(N, N2, N3) знайти і вивести квадрати і куби п’яти цілих чисел.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

void Power23(int N, int* N2, int* N3)
{
	*N2 = N * N;
	*N3 = N * N * N;
}

int main() {

	int n = 0, n2 = 1, n3 = 1;

	cout << "Enter a number: " << endl;
	cin >> n;
	Power23(n,&n2,&n3);
	cout << "N^2 = " << n2 << endl;
	cout << "N^3 = " << n3 << endl;
	system("pause");
	return 0;
}