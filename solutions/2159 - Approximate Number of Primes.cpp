/**
 * 2159 - Approximate Number of Primes.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long int n;
    cin >> n;

    double x = n * (1 / log(n));
    cout << fixed << setprecision(1) << x << ' ' <<
            fixed << setprecision(1) << 1.25506 * x << endl;

    return 0;
}