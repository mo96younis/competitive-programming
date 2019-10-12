/**
 * 1855 - Maester's Map.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

bool isArrow(char s)
{
    return s == '>' || s == '<' || s == 'v' || s == '^'? true : false
}

int main()
{
    unsigned short int x, y;
    cin >> x >> y;
    
    char map[y][x];
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cin >> map[i][j];
            if (!(map[0][0] == '>' || map[0][0] == 'v'))
            {
                cout << "!\n";
                return 0;
            }
        }
    }
    char currentChar = map[0][0];
    
    int i = 0, j = 0, iter = 0, err = x * y;
    while (iter < err)
    {
        if (map[i][j] == '>' && currentChar == '>')
        {
            for (int k = j + 1; k < x; k++)
            {
                j = k;
                if (map[i][k] == '*')
                {
                    cout << "*\n";
                    return 0;
                }
                else if (isArrow(map[i][k]))
                {
                    currentChar = map[i][k];
                    break;
                }
            }
        }
        else if (map[i][j] == '<' && currentChar == '<')
        {
            for (int k = j - 1; k > -1; k--)
            {
                j = k;
                if (map[i][k] == '*')
                {
                    cout << "*\n";
                    return 0;
                }
                else if (isArrow(map[i][k]))
                {
                    currentChar = map[i][k];
                    break;
                }
            }
        }
        else if (map[i][j] == '^' && currentChar == '^')
        {
            for (int k = i - 1; k > -1; k--)
            {
                i = k;
                if (map[k][j] == '*')
                {
                    cout << "*\n";
                    return 0;
                }
                else if (isArrow(map[k][j]))
                {
                    currentChar = map[k][j];
                    break;
                }
            }
        }
        else if (map[i][j] == 'v' && currentChar == 'v')
        {
            for (int k = i + 1; k < y; k++)
            {
                i = k;
                if (map[k][j] == '*')
                {
                    cout << "*\n";
                    return 0;
                }
                else if (isArrow(map[k][j]))
                {
                    currentChar = map[k][j];
                    break;
                }
            }
        }
        iter++;
    }
    
    cout << "!\n";
    return 0;
}