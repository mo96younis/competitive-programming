/**
 * 1436 - Brick Game.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        unsigned int nop;
        cin >> nop;

        unsigned int ages[nop];
        for (int j = 0; j < nop; j++) cin >> ages[j];
        cout << "Case " << i + 1 << ": " << ages[nop / 2] << endl;
    }
    return 0;
}