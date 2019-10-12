/**
 * 2031 - Rock, Paper, Airstrike.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

#define Airstrike "ataque"
#define Rock      "pedra"
#define Paper     "papel"

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;

        if       ((a == Airstrike && b == Rock)  ||
                 (a == Rock      && b == Paper)  ||
                 (a == Airstrike && b == Paper))
        {
            cout << "Jogador 1 venceu" << endl;
        }
        else if ((b == Airstrike && a == Rock)   ||
                 (b == Rock      && a == Paper)  ||
                 (b == Airstrike && a == Paper))
        {
            cout << "Jogador 2 venceu" << endl;
        }
        else if  (a == Paper && b == Paper)
        {
            cout << "Ambos venceram" << endl;
        }
        else if (a == b)
        {
            if (a == Airstrike) cout << "Aniquilacao mutua" << endl;
            else cout << "Sem ganhador" << endl;
        }
    }
    return 0;
}