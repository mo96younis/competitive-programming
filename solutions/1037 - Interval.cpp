/**
 *  1037 - Interval.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;

int main()
{
    double n;
    cin >> n;

    cout << (n >= 0 && n <= 25?  "Intervalo [0,25]"   :
             n > 25 && n <= 50?  "Intervalo (25,50]"  :
             n > 50 && n <= 75?  "Intervalo (50,75]"  :
             n > 75 && n <= 100? "Intervalo (75,100]" : "Fora de intervalo")
         << endl;
 
    return 0;
}