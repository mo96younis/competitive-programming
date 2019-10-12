/**
 * 1042 - Simple Sort.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int max = x;
    if (y > max) max = y;
    if (z > max) max = z;

    int min = x;
    if (y < min) min = y;
    if (z < min) min = z;

    int avg = x != max && x != min? x : y != max && y != min? y : z;

    cout << min << '\n'
         << avg << '\n'
         << max << "\n\n"
         << x   << '\n'
         << y   << '\n'
         << z   << endl;
 
    return 0;
}