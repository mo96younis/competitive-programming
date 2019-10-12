/**
 * 1096 - Sequence IJ 2.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0, n = 0, I = 1, J[3] = {7, 6, 5}; i < 15; i++, n++)
    {
        cout << "I=";
        
        if (i % 3 == 0 && i != 0) I += 2;
        
        cout << I << " " << "J=" << J[n] << endl;

        if (n == 2) n = -1;
    }       
    return 0;
}