/**
 * 1017 - Fuel Spent.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double t, averageSpeed;
    cin >> t >> averageSpeed;

    cout << fixed << setprecision(3) << (t * averageSpeed) / 12 << endl;

    return 0;
}