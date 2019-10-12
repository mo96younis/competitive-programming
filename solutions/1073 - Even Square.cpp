/**
 * 1073 - Even Square.cpp
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
    
    if (N > 5 && N < 2000)
        for (int i = 1; i <= N; i++)
            if (i % 2 == 0)
                cout << i << "^2 = " << i * i << endl;
 
    return 0;
}