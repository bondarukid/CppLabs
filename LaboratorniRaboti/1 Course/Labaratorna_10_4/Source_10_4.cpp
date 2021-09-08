/*
* 4.	Дано два масиви A і B розміру N, елементи яких впорядковані за зростанням. 
Об'єднати ці масиви так, щоб результуючий масив C (розміру 2*N) залишився впорядкованим за зростанням.
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int const N = 5;
	int* C;
	int A[N], B[N], K = 0;

	int temp = 0;

	C = new int[N*2];

	cout << "Array 1 ------";

	for (int i = 0; i < N; i++)
	{
		cout << "Enter a number: ";
		cin >> A[i];
	}

	cout << "Array 2 ------";

	for (int i = 0; i < N; i++)
	{
		cout << "Enter a number: ";
		cin >> B[i];
	}

	for (int i = 0; i < N; i++)
	{
		C[K++] = A[i];
	}

	for (int i = 0; i < N; i++)
	{
		C[K++] = B[i];
	}

	std::sort(&A[0], &A[N]);
	std::sort(&B[0], &B[N]);
	std::merge(&A[0], &A[N], &B[0], &B[N], &C[0]);



	for (int i = 0; i < 10; i++)
	{
		cout << C[i] << endl;
	}

	system("pause");
	return 0;
}