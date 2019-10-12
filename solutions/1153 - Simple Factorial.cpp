/**
 * 1153 - Simple Factorial.cpp
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
    while (!((n > 0) && (n < 13)));

    int fact = 1;
    for (int i = 0; i < n; i++) fact *= n - i;
    cout << fact << endl;

    return 0;
}