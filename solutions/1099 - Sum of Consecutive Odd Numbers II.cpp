/**
 * 1099 - Sum of Consecutive Odd Numbers II.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <algorithm>

#define endl '\n'

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int X, Y;
        cin >> X >> Y;
        
        if (Y > X) swap(X, Y);
            
        int sum = 0;

        for (int j = Y + 1; j < X; j++)
            if (j & 1)
                sum += j;
        
        cout << sum << endl;

        sum = 0;
    }
    return 0;
}