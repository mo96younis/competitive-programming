/**
 *  1065 - Even Between five Numbers.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{ 
    int result = 0;
    
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        
        if (num % 2 == 0)
            result++;
    }
    
    cout << result << " valores pares" << endl;
 
    return 0;
}