/**
 * 1095 - Sequence IJ 1.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    for (int i = 0, I = 1, J = 60; i <= 12; i++, I += 3, J -= 5)
        cout << "I=" << I << " " << "J=" << J << endl;
   
    return 0;
}