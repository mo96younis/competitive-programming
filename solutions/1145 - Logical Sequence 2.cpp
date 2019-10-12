/**
 * 1145 - Logical Sequence 2.cpp
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

    do
    {
        cin >> x >> y;
    }
    while (!((x > 1 && x < 20) && (y > x && y < 100000)));

    for (int i = 1; i <= y; i++)
    {
        cout << i;
        if ((i % x) == 0) cout << endl;
        else cout << " ";
    }
    return 0;
}