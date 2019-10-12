/**
 * 1589 - Bob Conduit.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int n, r1, r2;
 
    cin >> n;
 
    for (int i = 0; i < n; i++)
    {
        cin >> r1 >> r2;
        cout << r1 + r2 << endl;
    }
    return 0;
}