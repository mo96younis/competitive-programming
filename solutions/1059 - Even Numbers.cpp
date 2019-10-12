/**
 * 1059 - Even Numbers.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;
 
int main()
{
    for (int i = 1; i <= 100; i++)
        if (i % 2 == 0)
            cout << i << endl;
 
    return 0;
}