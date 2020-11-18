/*
5.	Описати рекурсивну функцію Combin1 (N, K) цілого типу, яка знаходить C (N, K) - число поєднань з N елементів по K - за допомогою рекурентного співвідношення:
C (N, 0) = C (N, N) = 1,
C (N, K) = C (N - 1, K) + C (N - 1, K - 1) при 0 <K <N.
Параметри функції - цілі числа; N> 0, 0 ≤ K ≤ N. Дано число N і п'ять різних значень K. Вивести числа C (N, K)
разом з кількістю рекурсивних викликів функції Combin1, що необхідні для їх знаходження.
*/

#include<iostream>
#include<Windows.h>

using namespace std;

int counter = 0;

int Combin1(int N, int K)
{
    if ((N == K) || (K == 0)) { counter++; return 1; }
    counter += 2;
    return Combin1(N - 1, K) + Combin1(N - 1, K - 1);
}

int main() {

	int N = 0,
		K = 0, C = 0;

	cout << "Enter N: ";
	cin >> N;

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter K: ";
		cin >> K;
		C = Combin1(N, K);
		cout << "Result: " << C << counter << endl;
	}

	system("pause");
	return 0;
}