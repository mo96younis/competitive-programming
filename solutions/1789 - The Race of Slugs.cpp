/**
 * 1789 - The Race of Slugs.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int n, s;
    while (cin >> n)
    {
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if (s > max) max = s;
        }

        if (max < 10) cout << 1 << endl;
        else if (max >= 10 && max < 20) cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}