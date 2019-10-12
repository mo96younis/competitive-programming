/**
 * 1168 - LED.cpp
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

    int LED[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (int i = 0; i < n; i++)
    {
        string v;
        cin >> v;

        int sum = 0;
        for (int j = 0, n = v.length(); j < n; j++)
            sum += LED[v[j] - '0'];
        cout << sum << " leds" << endl;
    }
}