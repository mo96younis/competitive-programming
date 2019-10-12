/**
 * 1133 - Rest of a Division.cpp
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

    cin >> x >> y;
    if (y > x)
    {
        int temp = x;
        x = y;
        y = temp;
    }

    for (int i = y + 1; i < x; i++)
        if ((i % 5) == 3 || (i % 5) == 2) cout << i << endl;
    
    return 0;
}