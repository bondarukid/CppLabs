/*
4.	Опишіть три функції:
1)	яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату цей об'єкт. Перевірте її.
2)	яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату посилання на об'єкт. Перевірте її.
3)	яка створює об'єкт цілого типу у вільній пам'яті і повертає в якості результату адресу об'єкта. Перевірте її.
Перевірте, чи можна описати аналогічні функції, якщо об’єкт створюється у стеку. Зробіть висновок.

*/

#include<iostream>
#include<Windows.h>

using namespace std;

int A()
{
	int *result = new int;

	return *result;
}

int B()
{
	int* result = new int;
	int& pResult = *result;
	return pResult;
}

int C()
{
	int* result = new int;
	return *result;
}

int main() {

	cout << A() << endl;
	cout << B() << endl;
	cout << C() << endl;
	system("pause");
	return 0;
}