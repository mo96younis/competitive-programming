/**
 * 1929 - Triangle.cpp
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

    if ((r1 + r2 > r3 && r1 + r3 > r2 && r2 + r3 > r1) ||
        (r2 + r3 > r4 && r2 + r4 > r3 && r3 + r4 > r2) ||
        (r3 + r4 > r1 && r3 + r1 > r4 && r1 + r4 > r3) ||
        (r4 + r1 > r2 && r4 + r2 > r1 && r1 + r2 > r4))
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}