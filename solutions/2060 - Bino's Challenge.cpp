/**
 * 2060 - Bino's Challenge.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int m[4] = {2, 3, 4, 5};
    int nums[n];

    for (int i = 0; i < n; i++)
        cin >> nums[i];

    for (int i = 0; i < 4; i++)
    {
        int result = 0;
        int j = 0;
        while (j < n)
        {
            if (nums[j] % m[i] == 0) result++;
            j++;
        }
        cout << result << " Multiplo(s) de " << m[i] << endl;
    }
    return 0;
}