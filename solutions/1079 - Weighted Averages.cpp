/**
 * 1079 - Weighted Averages.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

#define endl '\n'

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        double t[3];
        cin >> t[0] >> t[1] >> t[2];

        cout << fixed << setprecision(1);

        cout << (t[0] * 2 + t[1] * 3 + t[2] * 5) / 10 << endl;
    }
    
    return 0;
}