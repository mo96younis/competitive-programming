/**
 * 1114 - Fixed Password.cpp
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
    int pas;
    while ((cin >> pas) && pas != 2002) cout << "Senha Invalida" << endl;
    cout << "Acesso Permitido" << endl;
    return 0;
}