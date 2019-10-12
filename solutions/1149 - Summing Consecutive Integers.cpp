/**
 * 1149 - Summing Consecutive Integers.cpp
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
    int a, n;

    cin >> a;

    do
    {
        cin >> n;
    }
    while (n < 1);

    int sum = 0;
    for (int i = 0; i < n; i++) sum += (a + i);
    cout << sum << endl;

    return 0;
}