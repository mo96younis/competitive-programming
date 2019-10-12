/**
 * 1131 - Grenais.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int inter, gremio, checker;
    unsigned int ctr = 0, iwin = 0, gwin = 0, draw = 0;

    while ((cin >> inter >> gremio))
    {
        if (inter > gremio) iwin++;
        else if (gremio > inter) gwin++;
        else draw++;

        ctr++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;

        if ((cin >> checker) && checker != 2) continue;
        else break;
    }

    cout << ctr << " grenais" << endl;
    cout << "Inter:" << iwin << endl;
    cout << "Gremio:" << gwin << endl;
    cout << "Empates:" << draw << endl;

    if (iwin > gwin) cout << "Inter venceu mais" << endl;
    else if (gwin > iwin) cout << "Gremio venceu mais" << endl;
    else cout << "Não houve vencedor" << endl;

    return 0;
}