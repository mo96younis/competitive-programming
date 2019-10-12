/**
 * 1961 - Jumping Frog.cpp
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
    int p, n;
    cin >> p >> n;

    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i > 0 && abs(h[i - 1] - h[i]) > p)
        {
            cout << "GAME OVER" << endl;
            return 0;
        }
    }
    cout << "YOU WIN" << endl;

    return 0;
}