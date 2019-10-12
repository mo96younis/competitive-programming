/**
 * 1541 - Building Houses.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c, r;
    while ((cin >> a) && a != 0)
    {
        cin >> b >> c;
        r = (a * b * 100) / c;
        cout << (int) sqrt(r) << endl;
    }
    return 0;
}