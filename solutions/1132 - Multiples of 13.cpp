/**
 * 1132 - Multiples of 13.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int x, y;
    int sum = 0;

    cin >> x >> y;
    if (y > x)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = y, ctr = 0; i <= x; i++, ctr++)
        if (((y + ctr) % 13) != 0) sum += (y + ctr);

    cout << sum << endl;

    return 0;
}