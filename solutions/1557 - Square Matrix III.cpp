/**
 * 1557 - Square Matrix III.cpp
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
    unsigned int n;
    while ((cin >> n) && n != 0)
    {
        int mat[n][n];
        unsigned int t = 0, max = 0;
        
        // fill the matrix
        for (int i = 0, inc = 1; i < n; i++, inc*=2)
        {
            for (int j = 0, value = inc; j < n; j++, value*=2)
            {
                mat[i][j] = value;
                if (mat[i][j] > max) max = mat[i][j];
            }
        }
        
        while (max > 0)
        {
            max /= 10;
            t++;
        }
        
        // print the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << setw(t) << mat[i][j];
                
                if (j != n - 1) cout << " ";
                else cout << "\n";
            }
        }
        cout << "\n";
    }   
    return 0;
}