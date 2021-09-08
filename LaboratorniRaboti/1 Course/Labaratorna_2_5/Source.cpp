/*
2.	Вводяться десять натуральних чисел більше 2. Порахувати, скільки серед них простих чисел.
*/

#include <iostream>
#include <string>

using namespace std;

bool isPrime(int n)
{
    // если n > 2
    if (n > 2)
    {
        // в цикле перебираем числа от 2 до n - 1
        for (int i = 3; i < n; i++)
            if (n % i == 0) // если n делится без остатка на i - возвращаем false (число не простое)
                return false;

        // если программа дошла до данного оператора, то возвращаем true (число простое) - проверка пройдена
        return true;
    }
    else // иначе возвращаем false (число не простое)
        return false;
}

int main()
{
	int sum = 0;
    int num = 0;
	bool X;

	for (int i = 0; i < 10; i++)
	{
        cout << "Enter value: ";
        cin >> num;

        if (isPrime(num) == true)
        {
            sum++;
        }
	}

    cout << "Sum: " << sum << endl;

	system("pause");
	return 0;
}