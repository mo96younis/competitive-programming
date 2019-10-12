/**
 * 1116 - Dividing X by Y.cpp
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
    float x, y;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (y == 0) cout << "divisao impossivel" << endl;
        else printf("%.1f\n", x/y);
    }
    return 0;
}