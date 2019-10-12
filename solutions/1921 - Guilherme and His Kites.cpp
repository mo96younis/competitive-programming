/**
 * 1921 - Guilherme and His Kites.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned long long int sides;
    cin >> sides;

    cout << (2 * (sides - 3)) + ((sides - 3 - 1) * (sides - 3)) / 2 << endl;

    return 0;
}