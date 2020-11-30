/*1.Написати програму друкування таблиці значень функції y = sin(x) на відрізку [0; 1] із кроком h = 0,1.*/

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