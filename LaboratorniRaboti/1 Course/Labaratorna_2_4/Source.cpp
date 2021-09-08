/*
Дано ціле число N (> 0). За допомогою операцій ділення без остачі і взяття залишку
від ділення визначити, чи є в запису числа N цифра «2». Якщо є, то вивести true, якщо немає - вивести false.
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter a number: ";
    do
    {
        cin >> num;
    } while (num < 0);
    while (num)
    {

        if ((num % 10) == 2)
            count++;
        num = num / 10;

    }
    if (count != 0)
        cout << "True" << endl;
    else
        cout << "False" << endl;
	system("pause");
	return 0;
}