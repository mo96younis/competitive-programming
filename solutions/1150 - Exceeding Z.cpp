/**
 * 1150 - Exceeding Z.cpp
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
    int x, z;

    cin >> x;

    do
    {
        cin >> z;
    }
    while (z <= x);

    int sum = 0, ctr = 0;
    while (sum <= z)
    {
        sum += (x + ctr);
        ctr++;
    }
    cout << ctr << endl;

    return 0;
}