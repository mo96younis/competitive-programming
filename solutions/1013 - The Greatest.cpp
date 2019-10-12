/**
 * 1013 - The Greatest.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // determine the maximum value (either a or b)
    int max = (a + b + abs(a - b)) / 2;

    // assign c as the maximum value if it is bigger
    if (c > max)
        max = c;

    // print tha final maximum value
    cout << max << " eh o maior" << endl;

    return 0;
}