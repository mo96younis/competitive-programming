/**
 * 2028 - Sequence of Sequence.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, caso = 1;
    while (cin >> t)
    {
        int num = 0;
        vector<int> v = {0};
        for (int i = 0; i <= t; i++)
        {
            for (int j = 0; j < i; j++)
            {
                num++;
                v.push_back(i);
            }
        }
        cout << "Caso " << caso << ": " << num + 1;

        if (num + 1 == 1) cout << " numero\n";
        else cout << " numeros\n";

        for (int i = 0; i <= num; i++)
        {
            cout << v.at(i);

            if (i != num) cout << ' ';
        }
        cout << "\n\n";
        caso++;
    }
    return 0;
}