/*3.Створіть програму обчислення
Для обчислення реалізувати функцію піднесення числа до степеня.*/

#include <iostream>
using namespace std;

float Pow(int L)
{
    float S = 1;

    for (int i = 0; i < L; i++)
    {
        S *= L;
    }

    return S;
}

int main() 
{
    float S = 0.0;
    int N = 0;
    cout << "Enter N: " << endl;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        S += 1 / (1 + Pow(i));
    }

    cout << "S = " << S << endl;

    system("pause");
    return 0;
}