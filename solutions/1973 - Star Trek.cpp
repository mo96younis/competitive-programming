/**
 * 1973 - Star Trek.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long long int n;
    cin >> n;

    unsigned long long int star[n];
    unsigned long long int sheeps = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> star[i];
        sheeps += star[i];
    }

    unsigned int sum = 0;
    unsigned int stolen = 0;
    int i = 0;
    int his = -1;

    while (i < n && i > -1)
    {
        if (his < i)
        {
            his = i;
            sum++;
        }

        if (star[i] % 2 == 0)
        {
            if (star[i] > 0)
            {
                star[i]--;
                stolen++;
            }
            i--;
        }
        else
        {
            if (star[i] > 0)
            {
                star[i]--;
                stolen++;
            }
            i++;
        }
    }

    cout << sum << ' ' << (sheeps - stolen) << endl;

    return 0;
}