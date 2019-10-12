/**
 * 2143 - The Return of Radar
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int T, N;
    while ((cin >> T) && T != 0)
    {
        for (int i = 0; i < T; i++)
        {
            cin >> N;

            if (N % 2 == 0) cout << ((N - 2) * 2) + 2 << endl;
            else cout << ((N - 1) * 2) + 1 << endl;
        }
    }
    return 0;
}