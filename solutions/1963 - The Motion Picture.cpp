/**
 * 1963 - The Motion Picture.cpp
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
    double a, b;
    cin >> a >> b;

    cout << fixed << setprecision(2) << (double) (((b - a) * 100) / a) << '%' << endl;

    return 0;
}