/*
2.	������� ���������� ������� Fact2 (N) ������� ����, ��� �������� �������� ��������� ���������
N !! = N � (N-2) � (N-4) � ...
(N> 0 - �������� ������ ����; ������� ���������� � ������� ������� 2, ���� N - ����� �����, � 1, ���� N - �������). �� ��������� ���� ������� ��������� ������ ��������� �'��� ����� �����.

*/

#include <iostream>

using namespace std;

double Fact2(int  N)
{
    if (N <= 1)
        return 1;
    if (N == 2)
        return 2;
    return N * Fact2(N - 2);
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        int N = 0;
        cout << "Enter a number: ";
        cin >> N;
        cout << "Fact(N): " << Fact2(N) << endl;
    }

    system("pause");
	return 0;
}
