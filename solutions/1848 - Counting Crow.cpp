/**
 * 1848 - Counting Crow.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    string data;
    int sum = 0;
    for (int times = 0; times < 3; times++)
    {
        sum = 0;
        while ((cin >> data) && data[0] != 'c')
        {
            for (int i = 0; i < 3; i++)
            {
                if (data[i] == '*')
                {
                    if (i == 0) sum += 4;
                    else if (i == 1) sum += 2;
                    else sum += 1;
                }
            }
        }
        cout << sum << '\n';
        cin >> data;
    }
    return 0;
}