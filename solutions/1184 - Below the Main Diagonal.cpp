/**
 * 1184 - Below the Main Diagonal.cpp
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
    float M[12][12];
    float sum = 0;
    char O;
    cin >> O;
    
    for (int i = 0; i < 12; i++)
        for (int j = 0; j < 12; j++)
            cin >> M[i][j];
    
    for (int i = 0, n = 1; i < 11; i++)
    {
        for (int j = n; j < 12; j++)
            sum += M[j][i];
        n++;
    }
    
    if (O == 'S') cout << fixed << setprecision(1) << sum << endl;
    else cout << fixed << setprecision(1) << sum / 66 << endl;
    
    return 0;
}