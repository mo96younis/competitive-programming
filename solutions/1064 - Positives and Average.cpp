/**
 * 1064 - Positives and Average.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;
 
int main()
{     
    double x[6];
    int positiveNumbers = 0;
    double sum = 0;

    for (int i = 0; i < 6; i++)
    {
        cin >> x[i];

        if (x[i] > 0)
        {
            positiveNumbers++;
            sum += x[i];
        }
    }

    cout << fixed << setprecision(1);

    cout << positiveNumbers << " valores positivos" << endl;
    cout << sum / positiveNumbers << endl;
 
    return 0;
}