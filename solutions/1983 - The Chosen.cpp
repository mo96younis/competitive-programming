/**
 * 1983 - The Chosen.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <float.h>

using namespace std;

int main()
{
    unsigned int n;
    cin >> n;

    int ida, idb;
    float max = FLT_MIN;
    float note;

    for (int i = 0; i < n; i++)
    {
        cin >> ida >> note;
        if (max < note)
        {
            max = note;
            idb = ida;
        }
    }

    if (max < 8) cout << "Minimum note not reached" << endl;
    else cout << idb << endl;

    return 0;
}