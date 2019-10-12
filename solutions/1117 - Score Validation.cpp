/**
 * 1117 - Score Validation.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <stdio.h>

using namespace std;

bool checkval(float num);

int main()
{
    float x, y;
    while (cin >> x)
    {
        if (!checkval(x))
        {
            cout << "nota invalida" << endl;
            continue;
        }
        else
            break;
    }

    while (cin >> y)
    {
        if (!checkval(y))
        {
            cout << "nota invalida" << endl;
            continue;
        }
        else
            break;
    }

    printf("media = %.2f\n", (x + y) / 2);
    return 0;
}

bool checkval(float num)
{
    return num < 0.0 || num > 10.0? false : true;
}