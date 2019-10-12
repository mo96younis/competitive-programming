/**
 * 1066 - Even, Odd, Positive and Negative.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{ 
    int result[4] = {};
    
    for (int i = 0; i < 5; i++)
    {
        int num;
        cin >> num;
        
        if (num % 2 == 0)
            result[0]++;
        else
            result[1]++;

        if (num > 0)
            result[2]++;
        else if (num < 0)
            result[3]++;
    }
    
    cout << result[0] << " valor(es) par(es)" << endl;
    cout << result[1] << " valor(es) impar(es)" << endl;
    cout << result[2] << " valor(es) positivo(s)" << endl;
    cout << result[3] << " valor(es) negativo(s)" << endl;
 
    return 0;
}