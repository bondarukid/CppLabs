/*
8.	Описати рекурсивну функцію DigitSum (K) цілого типу, яка знаходить суму цифр цілого числа K,
не використовуючи оператор циклу. За допомогою цієї функції знайти суми чисел для п'яти даних цілих чисел.
*/


#include<iostream>
#include<Windows.h>

using namespace std;

int DigitSum(int N)
{
    int result;

    if (N < 10) return N;

    result = N / 10;
    return N - result * 10 + DigitSum(result);
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int K = 0;
        cout << "Enter a number: ";
        cin >> K;
        cout << "Result: " << DigitSum(K) << endl;
    }
    system("pause");
    return 0;
}