/**
 * 2152 - Pepe, I Already Took the Candle!.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned short int test_cases;
    cin >> test_cases;

    string h, m;
    unsigned short int o;
    while (test_cases--)
    {
        cin >> h >> m >> o;
        h.length() == 1? cout << '0' + h + ':' : cout << h + ':';
        m.length() == 1? cout << '0' + m + " - " : cout << m + " - ";
        o == 1? cout << "A porta abriu!\n" : cout << "A porta fechou!\n";
    }
    return 0;
}