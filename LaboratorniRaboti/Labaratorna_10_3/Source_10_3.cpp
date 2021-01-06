/*
3.	Дано масив розміру N. Знайти номер мінімального і номер максимального елементів цього масиву. 
Обнулити елементи масиву, розташовані між його мінімальним і максимальним елементами (не включаючи мінімальний і максимальний елементи).
Розв’язати задачу з використанням адресної арифметики.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int N = 10;

	int mass[N], max = 0, min = 0;

	int* pMax = &max;
	int* pMin = &min;

	for (int i = 0; i < N; i++)
	{
		cout << "Enter a number for array element [" << i << "] - ";
		cin >> mass[i];
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Array element [" << i << "] - " << mass[i] << endl;
	}

	*pMax = mass[0];
	*pMin = mass[0];

	for (int i = 0; i < N; i++)
	{
		if (*pMax < mass[i]) *pMax = mass[i];
		if (*pMin > mass[i]) *pMin = mass[i];
	}

	cout << "Min: " << *pMin << endl;
	cout << "Max: " << *pMax << endl;

	for (int i = *pMin; i < *pMax - 1; i++)
	{
		mass[i] = 0;
	}

	for (int i = 0; i < N; i++)
	{
		cout << "Array element [" << i << "] - " << mass[i] << endl;
	}

	system("pause");
	return 0;
}