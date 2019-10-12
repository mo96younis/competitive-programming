/**
 * 1478 - Square Matrix II.cpp
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
        
        // fill the matrix
        for (int times = 0, x = 0; times < n; times++, x++)
            for (int i = 0; i < n; i++)
                for (int j = 0, value = 1; j < n; j++)
                    if (i + x == j || j + x == i) mat[i][j] = value + x;
        
        // print the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << setw(3) << mat[i][j];
                
                if (j != n - 1) cout << " ";
                else cout << "\n";
            }
        }
        cout << "\n";
    }   
    return 0;
}