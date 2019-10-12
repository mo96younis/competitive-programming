/**
 * 1060 - Positive Numbers.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{
    float values[6];
    cin >> values[0] >> values[1] >> values[2] >> values[3] >> values[4] >> values[5];

    int result = 0;

    for (int i = 0; i < 6; i++)
        if (values[i] > 0)
            result++;
    
    cout << result << " valores positivos" << endl;
 
    return 0;
}