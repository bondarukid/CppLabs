/*5.����� ���������� ����������, ���� ������� ��� ��� ���� �������, ��� ������ ����� �����.
���������, �� ������� �������� ����� � ������� [2, n], �� � ������� ����������.
���� ���, �� ������� �� ����� ����� � ���. ������� �������� �������.*/

#include <iostream>
using namespace std;

bool is_Perfect(int Num) {

    int Sum = 0;

    for (int j = 1; j < Num; j++) 
    {
        if (Num % j == 0)
            Sum += j;
    }
    if (Sum == Num)
        return true;
    return false;
}
int main() 
{
    int N;
    cout << "Enter N: " << endl;
    cin >> N;

    for (int i = 1; i <= N; i++) 
    {
        if (is_Perfect(i)) 
        {
            cout << i << endl;
        }
    }

    system("pause");
    return 0;
}