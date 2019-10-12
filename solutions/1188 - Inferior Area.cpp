/**
 * 1188 - Inferior Area.cpp
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
    double M[12][12];
    double sum = 0;
    char O;
    
    cin >> O;
    
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> M[i][j];

    for (int i = 7, ctr = 5, n = 2; i < 12; i++, n += 2)
    {
        for (int j = 0; j < n; j++, ctr++)
            sum += M[i][ctr];
        ctr -= n + 1;
    }

    if (O == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if (O == 'M') cout << fixed << setprecision(1) << sum / 30 << endl;
    
    return 0;
}