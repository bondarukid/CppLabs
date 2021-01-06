/*
1. Розробити та реалізувати алгоритми сортування лінійного масиву зі 100 цілих чисел:
	1) методом обмінів за зростанням;
	2) методом вибору за спаданням;
	3) методом вставок за зростанням.

*/

#include <iostream>
#include <algorithm>

using namespace std;

int *Array;

void ArrayCreate()
{
	Array = new int[100];

	for (short i = 0; i < 100; i++)
	{
		Array[i] = rand() % 100 + 0;
	}
}

void ShowArray()
{
	for (int i = 0; i < 100; i++)
	{
		cout << "Array element [" << i << "] =" << Array[i] << endl;
	}
}

void Sort1()
{
	for (int startIndex = 0; startIndex < 100 - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < 100; ++currentIndex)
		{
			if (Array[currentIndex] < Array[smallestIndex])
				smallestIndex = currentIndex;
		}

		std::swap(Array[startIndex], Array[smallestIndex]);
	}
}

void Sort2()
{
	for (int startIndex = 0; startIndex < 100 - 1; ++startIndex)
	{
		int smallestIndex = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < 100; ++currentIndex)
		{
			if (Array[currentIndex] > Array[smallestIndex])
				smallestIndex = currentIndex;
		}

		std::swap(Array[startIndex], Array[smallestIndex]);
	}
}

void Sort3()
{
	for (int i = 0; i < 100; ++i)
		scanf_s("%i", Array + i);
	for (int i = 0, x, j; i < 100; ++i)
	{
		x = Array[i];
		for (j = i - 1; j >= 0 && Array[j] > x; --j) Array[j + 1] = Array[j];
		Array[j + 1] = x;
	}
}

int main()
{
	ArrayCreate();

	ShowArray();
	Sort1();
	cout << endl << endl;
	ShowArray();
	Sort2();
	cout << endl << endl;
	ShowArray();
	Sort3();
	cout << endl << endl;
	ShowArray();

	delete[] Array;

	system("pause");
	return 0;
}