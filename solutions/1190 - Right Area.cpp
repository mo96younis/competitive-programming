/**
 * 1190 - Right Area.cpp
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

    for (int i = 11, n = 10, ctr = 1; i >= 7; i--, n -= 2, ctr -= n + 1)
        for (int j = 0; j < n; j++, ctr++)
            sum += M[ctr][i];

    if (O == 'S') cout << fixed << setprecision(1) << sum << endl;
    else if (O == 'M') cout << fixed << setprecision(1) << sum / 30 << endl;
    
    return 0;
}