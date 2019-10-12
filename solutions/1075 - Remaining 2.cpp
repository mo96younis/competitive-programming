/**
 * 1075 - Remaining 2.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;
 
int main()
{ 
    int N;
    cin >> N;
    
    for (int i = 1; i < 10000; i++)
        if (i % N == 2)
            cout << i << endl;
 
    return 0;
}