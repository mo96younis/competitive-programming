/**
 * 1980 - Shuffling.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    string s;
    while (cin >> s && s != "0" && s.length() <= 15)
    {
        unsigned long long int result = 1;

        for (int i = 1, n = s.length(); i <= n; i++) result *= i;
        
        cout << result << endl;
    }

    return 0;
}