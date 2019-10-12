/**
 * 1828 - Bazinga!.cpp
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
    
    string s, r;
    for (int i = 0; i < n; i++)
    {
        cin >> s >> r;
        if (s == r)
        {
            cout << "Caso #" << i + 1 << ": De novo!" << endl;
        }
        else if (s == "tesoura" && (r == "lagarto" || r == "papel")   ||
                 s == "papel"   && (r == "pedra"   || r == "Spock")   ||
                 s == "pedra"   && (r == "lagarto" || r == "tesoura") ||
                 s == "lagarto" && (r == "Spock"   || r == "papel")   ||
                 s == "Spock"   && (r == "tesoura" || r == "pedra"))
        {
            cout << "Caso #" << i + 1 << ": Bazinga!" << endl;
        }
        else
        {
            cout << "Caso #" << i + 1 << ": Raj trapaceou!" << endl;
        }
    }
    return 0;
}