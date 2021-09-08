/*
10.	Описати рекурсивну функцію IsPowerN (K,N) логічного типу, яка повертає True, якщо цілий параметр K (> 0) є ступенем числа N
(натуральне число), і False в іншому випадку. З її допомогою знайти кількість степенів числа N в наборі з 10 цілих позитивних чисел.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

bool IsPowerN(int K, int N)
{
    while (!(K % N)) K /= N;
    return (K == 1);
}

int main() {

	int N = 0, K = 0;

	cout << "Enter N: ";
	cin >> N;
	for (int i = 0; i < 10; i++)
	{
		cout << "Enter K: ";
		cin >> K;
		cout << "Result: " << boolalpha << IsPowerN(K, N) << endl;
	}

	system("pause");
	return 0;
}