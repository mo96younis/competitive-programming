/**
 * 1080 - Highest and Position.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <climits>

using namespace std;

int main()
{
    unsigned int num[100], max = 0, pos = 0;
    for (int i = 0; i < 100; i++)
    {
        cin >> num[i];

        if (num[i] > max)
        {
            max = num[i];
            pos = i;
        }
    }
    
    cout << max << '\n' << pos + 1 << endl;
    
    return 0;
}