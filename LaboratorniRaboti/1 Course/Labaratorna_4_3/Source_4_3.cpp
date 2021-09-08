/*
3.	Описати рекурсивну функцію PowerN (X, N) дійсного типу, яка знаходить значення N-го степеня числа X за формулами:
X 0 = 1,
X N = (X N / 2) 2 при парних N> 0,
X N = X · X N-1 при непарних N> 0,
X N = 1 / X -N при N <0
(X ≠ 0 - дійсне число, N - ціле; у формулі для парних N повинна використовуватися операція цілочисельного ділення).
За допомогою цієї функції знайти значення X N для даного X при п'яти даних значеннях N.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

double PowerN(double X, int N)
{
	double result = 1;

	if (N > 0)
	{
		/*if (N%2 != 0)
		{
			return X * PowerN(X, N - 1);
		}
		else if (N % 2 == 0)
		{
			return X * PowerN(X, N - 1);
		}*/
		return X * PowerN(X, N - 1);
	}
	else if (N < 0)
	{
		return 1 / X * PowerN(X, N + 1);
	}

	return result;
}

int main() {

	int N = 0;
	double X = 0.0;

	cout << "Enter a X: ";
	cin >> X;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter a N: ";
		cin >> N;
		cout << PowerN(X,N) << endl;
	}

	system("pause");
	return 0;
}
