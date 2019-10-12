/**
 * 1041 - Coordinates of a Point.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    float X, Y;
    cin >> X >> Y;

    cout << (X > 0  && Y > 0 ? "Q1"     :
             X < 0  && Y > 0 ? "Q2"     :
             X < 0  && Y < 0 ? "Q3"     :
             X > 0  && Y < 0 ? "Q4"     :
             X == 0 && Y == 0? "Origem" :
             X == 0 && Y != 0? "Eixo Y" : "Eixo X")
         << endl;

    return 0;
}