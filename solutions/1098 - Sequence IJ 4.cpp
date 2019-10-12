/**
 * 1098 - Sequence IJ 4.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    float inc = 0, I = 0, J[3] = {1, 2, 3};
    
    for (int i = 0, n = 0; i < 33; i++, n++)
    {
        cout << "I=";
        
        if (i % 3 == 0 && i != 0) I += 0.2;
        
        cout << I << " " << "J=" << J[n] + inc << endl;
        
        if (n == 2)
        {
            inc += 0.2;
            n = -1;
        }
    }
    return 0;
}