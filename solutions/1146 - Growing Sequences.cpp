/**
 * 1146 - Growing Sequences.cpp
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
    unsigned int x;
    while ((cin >> x) && x != 0)
    {
        for (int i = 1; i <= x; i++)
        {
            cout << i;
            if (i != x) cout << " ";
        }
        cout << endl;
    }
    return 0;
}