/**
 * 2029 - Honey Reservoir.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

#define Pi 3.14

int main()
{
    double v, d;
    while (cin >> v && cin >> d)
    {
        double h = v / (Pi * ((d * d) / 4));
        cout << "ALTURA = "<< fixed << setprecision(2) << h << endl;

        double a = Pi * (d / 2) * (d / 2);
        cout << "AREA = " << fixed << setprecision(2) << a << endl;
    }
    return 0;
}