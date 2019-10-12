/**
 * 2059 - Odd, Even or Cheating.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;

    if (a == 1 && r == 1)
    {
        cout << "Jogador 2 ganha!" << endl;
        return 0;
    }

    if (a == 0 && r == 1)
    {
        cout << "Jogador 1 ganha!" << endl;
        return 0;
    }

    if (p == 1)
    {
        if ((j1 + j2) % 2 == 0)
        {
            cout << "Jogador 1 ganha!" << endl;
            return 0;
        }
        else
        {
            cout << "Jogador 2 ganha!" << endl;
            return 0;
        }
    }
    else
    {
        if ((j1 + j2) % 2 == 0)
        {
            cout << "Jogador 2 ganha!" << endl;
            return 0;
        }
        else
        {
            cout << "Jogador 1 ganha!" << endl;
            return 0;
        }
    }
    return 0;
}