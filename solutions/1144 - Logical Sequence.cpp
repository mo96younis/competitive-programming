/**
 * 1144 - Logical Sequence.cpp
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
    while (!(n > 1 && n < 1000));

    for (int i = 0, num = 1; i < n; i++, num++)
    {
        cout << num << " ";
        cout << num * num << " ";
        cout << num * num * num << endl;

        cout << num << " ";
        cout << num * num + 1 << " ";
        cout << num * num * num + 1 << endl;
    }
    return 0;
}