/*2.������� �������� ����������
1) ��� ������������ ������� �������;
2) ��� ���������� ���������� ������� ��������� ����� �� ������� � ����������� ��������� �����.*/

#include <iostream>

using namespace std;

float Pow(int N)
{
    float S = 1;

    for (int i = 0; i < N; i++)
    {
        S *= -2;
    }

    return S;
}

float Fact(int N)
{
    float S = 1;

    for (int i = 2; i <= N; i++)
    {
        S *= i;
    }

    return S;
}

int main() 
{
    int N = 0;
    float S = 0.0;

    cout << "Enter n: " << endl;
    cin >> N;
    S = Pow(N) / Fact(N);

    cout << "S = " << S << endl;

    system("pause");
    return 0;
}