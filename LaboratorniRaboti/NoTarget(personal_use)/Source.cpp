/*3.	Описати рекурсивну функцію PowerN(X, N) дійсного типу, яка знаходить значення N - го степеня числа X за формулами :
X 0 = 1,
X N = (X N / 2) 2 при парних N > 0,
X N = X · X N - 1 при непарних N > 0,
X N = 1 / X - N при N < 0
	(X ≠ 0 - дійсне число, N - ціле; у формулі для парних N повинна використовуватися операція цілочисельного ділення).
	За допомогою цієї функції знайти значення X N для даного X при п'яти даних значеннях N.*/

#include <iostream>
#include <Windows.h>
using namespace std;

int PowerN(int X, int N) {
	int Af = 1, i = 1;
	if (N == 0) return 1;
	//for (; i <= N; i++) {
	//	if (i == 1) Af = X * X;
	//	Af = Af * X;
	//}
	

	/*for (; i < N; i++)
	{
		Af *= X;
	}
	*/

	if (N % 2 == 0) {
		Af = (Af / 2) * 2;
		return Af;
	}
	if (N % 2 != 0) {
		Af = X * Af - 1;
		return Af;
	}
	if (N < 0) {
		Af = 1 / X - N;
		return Af;
	}
}

int main() {
	SetConsoleOutputCP(1251);
	int X, N, Af;
	do {
		cout << "Введіть число (воно не повінно дорівнювати 0):";
		cin >> X;
		if (X == 0) cout << "Ви повинні ввести число яке не дорівнює 0." << endl;
	} while (X == 0);
	for (int i = 0; i < 5; i++) {
		switch (i) {
		case 0:
			cout << "Введіть перше значення степення:";
			break;
		case 1:
			cout << "Введіть друге значення степення:";
			break;
		case 2:
			cout << "Введіть третє значення степення:";
			break;
		case 3:
			cout << "Введіть четверте значення степення:";
			break;
		case 4:
			cout << "Введіть п'яте значення степення:";
			break;
		}
		
		cin >> N;
		Af = PowerN(X, N);
		cout << Af << endl;
	}
	system("pause");
	return 0;
}