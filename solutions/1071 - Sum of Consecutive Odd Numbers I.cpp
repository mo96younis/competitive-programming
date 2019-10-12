/**
 * 1071 - Sum of Consecutive Odd Numbers I.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{ 
    int num_1, num_2;
    cin >> num_1 >> num_2;

    int min = num_1;
    if (num_2 < min) min = num_2;
        
    int max = num_1;
    if (num_2 > max) max = num_2;
    
    int result = 0;
    for (int i = max - 1; i > min; i--)
        if (i % 2 != 0)
            result += i;
    
    cout << result << endl;
 
    return 0;
}