/**
 * 2140 - Two Bills.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int n, m, cost;

    /**
     *
     * calculate all possible values that just two bills would make
     *
     * unsigned int bills[] = {2, 5, 10, 20, 50, 100};
     * for (int i = 0; i < 6; i++)
     *     for (int j = 0; j < 6; j++)
     *         cout << bills[i] + bills[j] << ", ";
     */
    unsigned int bills[] = {4, 7, 12, 22, 52, 102, 7, 10, 15, 25, 55,
                            105, 12, 15, 20, 30, 60, 110, 22, 25, 30,
                            40, 70, 120, 52, 55, 60, 70, 100, 150,
                            102, 105, 110, 120, 150, 200};

    while ((cin >> n >> m) && !(n == 0 && m == 0))
    {
        cost = m - n;
        for (int i = 0; i < 36; i++)
        {
            if (cost == bills[i])
            {
                cout << "possible" << endl;
                break;
            }
            if (i + 1 == 36 && cost != bills[i])
            {
                cout << "impossible" << endl;
            }
        }
    }
    return 0;
}