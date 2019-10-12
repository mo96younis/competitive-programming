/**
 * 1866 - Bill.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;

    unsigned int s;
    for (int i = 0; i < N; i ++)
    {
        cin >> s;

        int result = 0;
        for (int j = 0; j < s; j++)
        {
            if (j % 2 == 0) result++;
            else result--;
        }
        cout << result << endl;
    }
    return 0;
}