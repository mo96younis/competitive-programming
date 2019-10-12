/**
 * 1134 - Type of Fuel.cpp
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
    int select;
    int Alcohol = 0, Gasoline = 0, Diesel = 0;

    while ((cin >> select))
    {
        if (select == 1) Alcohol++;
        else if (select == 2) Gasoline++;
        else if (select == 3) Diesel++;
        else if (select == 4) break;
        continue;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << Alcohol << endl;
    cout << "Gasolina: " << Gasoline << endl;
    cout << "Diesel: " << Diesel << endl;

    return 0;
}