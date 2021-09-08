/*
* 1.	Маємо ціле n > 2.
Скласти програму для знаходження всіх простих чисел із діапазону [2, n], які є паліндромами.
(Описати функції, які визначають чи є число простим та чи є число паліндромом).
*/

#include<iostream>
using namespace std;

unsigned getReverse(int N) {

    unsigned R = N % 10;

    while (N /= 10) 
    {
        R = R * 10 + N % 10;
    }

    return R;
}

bool isPalindrom(int N) 
{
    return N == getReverse(N);
}

bool isSimple(int N)
{
    for (int i = 2; i < sqrt(N); i++) 
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int N;

    cout << "Input n: " << endl;
    cin >> N;

    for (int i = 2; i <= N; i++)
    {
        if (isSimple(i) && isPalindrom(i))
        {
            cout << i << endl;
        }
    }

    system("pause");
    return 0;
}
