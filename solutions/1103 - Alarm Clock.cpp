/**
 * 1103 - Alarm Clock.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2;
    while (cin >> h1 >> m1 >> h2 >> m2 && !(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0))
    {
        int h;
        
        if (h1 > h2) h = (24 - (h1 - h2)) * 60;
        else if (h1 < h2) h = (h2 - h1) * 60;
        else h = m1 < m2? 0 : 1440;

        cout << h - m1 + m2 << endl;
    }
    return 0;
}