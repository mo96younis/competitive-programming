/**
 * 1002	- Area of a Circle.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

#define Pi 3.14159

int main()
{
    double r;
    cin >> r;

    cout << "A=" << fixed << setprecision(4) << (r * r * Pi) << endl;

    return 0;
}