/*
2.	Описати функцію DigitCount (K) цілого типу, яка знаходить кількість цифр цілого позитивного числа K.
Використовуючи цю функцію, знайти кількість цифр для кожного з п'яти даних цілих позитивних чисел.
*/
#include<iostream>
#include<Windows.h>

using namespace std;

int DigitCount(int K)
{
	int result, i = 0;

	if (K > 0)
	{
		for (; K > 0; i++) {
			K /= 10;
		}
	}

	return i;
}

int main() {
	for  (int i = 0; i < 5; i++)
	{
		int number = 0;

		cout << "Enter a number: ";
		cin >> number;

		cout << DigitCount(number) << endl;
	}

	system("pause");
	return 0;
}