/**
 * 1151 - Easy Fibonacci.cpp
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
    int n;

    do
    {
        cin >> n;
    }
    while (!((n > 0) && (n < 46)));

    int inj1 = 0, inj2 = 1, sum = inj1 + inj2;
    cout << inj1 << " " << inj2 << " ";
    for (int i = 0; i < n - 2; i++)
    {
        sum = inj1 + inj2;
        cout << sum;
        inj1 = inj2;
        inj2 = sum;
        if (!(i + 1 >= n - 2)) cout << " ";
    }
    cout << endl;

    return 0;
}