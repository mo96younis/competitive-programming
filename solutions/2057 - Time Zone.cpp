/**
 * 2057 - Time Zone.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int s, t, f;
    cin >> s >> t >> f;

    int T = s + t + f;

    if (T < 0) T += 24;
    else T %= 24;
    
    cout <<  T << endl;

    return 0;
}