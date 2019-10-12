/**
 * 1933 - Tri-du.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int max = a;
    if (b > max) max = b;

    cout << max << endl;

    return 0;
}