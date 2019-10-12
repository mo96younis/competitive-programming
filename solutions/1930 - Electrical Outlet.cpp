/**
 * 1930 - Electrical Outlet.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int r1, r2, r3, r4;
    cin >> r1 >> r2 >> r3 >> r4;

    cout << (r1 + r2 + r3 - 3) + r4 << endl;

    return 0;
}