/**
 * 1858 - Theon's Answer.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;

    int min = INT_MAX;
    unsigned int times = 0;
    unsigned int choices[N];
    for (int i = 0; i < N; i++)
    {
        cin >> choices[i];
        if (choices[i] < min)
        {
            min = choices[i];
            times = i;
        }
    }
    cout << times + 1 << "\n";
    return 0;
}