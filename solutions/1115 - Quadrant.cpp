/**
 * 1115 - Quadrant.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int x, y;

    while ((cin >> x >> y) && ((x != 0) && (y != 0)))
        cout << (x > 0 && y > 0? "primeiro" :
                 x > 0 && y < 0? "quarto"   :
                 x < 0 && y < 0? "terceiro" : "segundo")
             << endl;

    return 0;
}