/*
����� ���� ����������� � �������� ��������� ( �N� - ����, �W� - �����, �S� - ������, �E� - ����)
� �������� ��� ������ �������: 0 - ������������ ���, 1 - ������� �����, - 2- ������� �������. ���� ������ C - ��������
�������� ������ � ���� ����� N - ������� ���� �������. ������� �������� ������ ���� ��������� �������� �������.
*/
#include <iostream>
#include <string>
# include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");


    char S;
    int N;
    cout << "������� ������ ����������� (�ѻ � �����, �ǻ � �����, �޻ � ��, �» � ������): ";
    cin >> S;
    cout << "������� �������� ������� ��� ������ (0 � ���������� ��������, 1 � ������� ������, -1 � ������� �������): ";
    cin >> N;
    cout << "����������� - ";
    switch (N) {
    case 1: switch (S) {
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    } break;
    case -1: switch (S) {
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    } break;
    case 0: switch (S) {
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    case '�': cout << "�"; break;
    } break;
    }

    cout << endl;

	system("pause");
	return 0;
}