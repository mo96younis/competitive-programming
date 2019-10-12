/**
 * 1021 - Banknotes and Coins.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    long double n;
    cin >> n;
    
    long long intPart = (long long) n;
    long long floatPart = round((n - intPart) * 100);

    long double note[] = {100, 50, 20, 10, 5, 2};
    long double coin[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    // set a precision for any floating-point number will be printed
    cout << fixed << setprecision(2);

    cout << "NOTAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        long long result = intPart / note[i];
        intPart -= note[i] * result;
        cout << result << " nota(s) de R$ " << note[i] << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < 6; i++)
    {
        bool condition = (i == 0);
        long long result = (condition? intPart : floatPart) / round(coin[i] * (condition? 1 : 100));
        (condition? intPart : floatPart) -= round(coin[i] * (condition? 1 : 100)) * result;
        cout << result << " moeda(s) de R$ " << coin[i] << endl;
    }

    return 0;
}