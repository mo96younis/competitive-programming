/**
 * 1435 - Square Matrix I.cpp
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
        for (int times = 0, tlborder = 0, brborder = 1, value = 1; times < n; times++)
        {
            for (int i = times; i < n - times; i++)
            {
                for (int j = times; j < n - times ; j++)
                {
                    // top & left borders
                    if (i == tlborder || j == tlborder) mat[i][j] = value;
                    
                    // bottom & right borders
                    else if (i == n - brborder || j == n - brborder) mat[i][j] = value;
                }
            }
            tlborder++;
            brborder++;
            value++;
        }
        
        // print the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] < 10) cout << "  ";
                else cout << " ";

                cout << mat[i][j];
                
                if (j != n - 1) cout << " ";
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}