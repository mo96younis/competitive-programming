/**
 * 1827 - Square Array IV.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int n;
    while (cin >> n)
    {
        int mat[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j >= round(n / 3)           &&
                    j <= (n - 1) - round(n / 3) &&
                    i >= round(n / 3)           &&
                    i <= (n - 1) - round(n / 3))
                {
                    if (n % 2 != 0              &&
                        j == ((n + 1) / 2) - 1  &&
                        i == ((n + 1) / 2) - 1)
                    {
                        mat[i][j] = 4;
                    }
                    else
                    {
                        mat[i][j] = 1;
                    }
                }
                else if (i == j)
                {
                    mat[i][j] = 2;
                }
                else if (i == (n - 1 - j))
                {
                    mat[i][j] = 3;
                }
                else
                {
                    mat[i][j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               cout << mat[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }
    return 0;
}