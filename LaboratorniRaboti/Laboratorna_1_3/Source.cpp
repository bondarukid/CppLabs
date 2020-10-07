/*
* 8.	Дано значення кута α в радіанах (0 ≤ α < 2 • π). Обчислити значення цього ж кута в градусах,
        враховуючи, що 180 ° = π радіанів. Як значення π використовувати 3.14.       
*/

#include <iostream>

using namespace std;

int main()
{
    double a = 0.0;

    cout << "Enter a: ";
    cin >> a;

    cout << "Result: " << (a * 180) / 3.14 << endl;

    system("pause");
    return 0;
}