/**
 * 1101 - Sequence of Numbers and Sum.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int M, N;
    while (cin >> M >> N)
    {
        if (M <= 0 || N <= 0)
        {
            return 0;
        }
        else
        {
            if (N > M) swap(M, N);
                
            int sum = 0;

            for (int i = N; i <= M; i++)
            {
                cout << i << " ";
                sum += i;
            }

            cout << "Sum=" << sum << endl;
            
            sum = 0;
        }
    }
    return 0;
}