/*1.�������� �������� ���������� ������� ������� ������� y = sin(x) �� ������ [0; 1] �� ������ h = 0,1.*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{

    for (float i = 0; i <= 1; i += 0.1) {
        cout << i << " " << 3 * sin(i) << endl;
    }

    system("pause");
    return 0;
}