/**
 * 1962 - A Long, Long Time Ago.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int year;
        cin >> year;

        int result = (2015 - year);

        if (result <= 0) cout << abs(result) + 1 << " A.C." << endl;
        else cout << result << " D.C." << endl;
    }
    return 0;
}