/*
* 1.	Дано відстань L в сантиметрах. Використовуючи операцію цілочисельного ділення,
   знайти кількість повних метрів в ньому (1 метр = 100 см).
*/

#include <iostream>

using namespace std;

int main()
{
	int L = 0;

	cout << "Enter L in cm" << endl;
	cin >> L;

	cout << "Result: " << L / 100 << endl;
	system("pause");
	return 0;
}