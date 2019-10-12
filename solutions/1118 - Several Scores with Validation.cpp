/**
 * 1118 - Several Scores with Validation.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

#define endl '\n'

using namespace std;

float calcVal(float* val);
float calcScore(float* stval, float* ndval);

int main()
{
    cout << fixed << setprecision(2);

    float x, y;
    cout << "media = " << calcScore(&x, &y) << endl;

    int n = 0;
    while (n != 2)
    {
        cout << "novo calculo (1-sim 2-nao)" << endl;

        cin >> n;
        
        if (n == 1) cout << "media = " << calcScore(&x, &y) << endl;
    }
    return 0;
}

float calcVal(float* val)
{
    while (cin >> (*val))
    {
        if ((*val) < 0.0 || (*val) > 10.0)
        {
            cout << "nota invalida" << endl;
            continue;
        }
        else
        {
            return (*val);
        }
    }
}

float calcScore(float* stval, float* ndval)
{
    return (calcVal(stval) + calcVal(ndval)) / 2;
}