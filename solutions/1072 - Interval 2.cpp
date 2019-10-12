/**
 * 1072 - Interval 2.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{ 
    unsigned int N;
    cin >> N;

    unsigned int in = 0, out = 0;

    for (int i = 0; i < N; i++)
    {
        long int X;
        cin >> X;
        
        if (X >= 10 && X <= 20)
            in++;
        else
            out++;
    }
    
    cout << in << " in" << endl << out << " out" << endl;
 
    return 0;
}