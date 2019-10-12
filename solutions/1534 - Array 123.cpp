/**
 * 1534 - Array 123.cpp
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
    while (cin >> n)
    {
        int mat[n][n];
        
        // fill the matrix
        for (int times = 0; times < n; times++)
        {
            for (int i = times; i < n - times; i++)
            {
                for (int j = times; j < n - times ; j++)
                {
                    if (i == j)
                    {
                        if (n % 2 != 0 && j == (n - 1) / 2) mat[i][j] = 2;
                        else mat[i][j] = 1;
                    }
                    else if ((i == times && j == n - times - 1) || (i == n - times - 1 && j == times))
                    {
                        mat[i][j] = 2;
                    }
                    else
                    {
                        mat[i][j] = 3;
                    }
                }
            }
        }
        
        // print the matrix
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) cout << mat[i][j];
            cout << "\n";
        }
    }
    return 0;
}