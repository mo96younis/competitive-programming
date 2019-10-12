/**
 * 1074 - Even or Odd.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

#define endl '\n'

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int X;
        cin >> X;

        if (X != 0)
        {
            if (X % 2 == 0) cout << "EVEN ";
            else cout << "ODD ";

            if (X > 0 && X != 0) cout << "POSITIVE" << endl;
            else cout << "NEGATIVE" << endl;
        }
        else
        {
            cout << "NULL" << endl;
        }
    }
 
    return 0;
}