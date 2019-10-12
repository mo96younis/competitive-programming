/**
 * 1011	- Sphere.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define Pi 3.14159

int main()
{
    unsigned int r;
    cin >> r;

    double volume;
    volume = (4.0 / 3.0) * Pi * pow(r, 3);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;

    return 0;
}