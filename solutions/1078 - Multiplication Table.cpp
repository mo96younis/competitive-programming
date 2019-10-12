/**
 * 1078 - Multiplication Table.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{ 
    int N;   
    cin >> N;
    
    for (int i = 0; i < 10; i++)
        cout << i + 1 << " x " << N << " = " << (i + 1) * N << endl;
 
    return 0;
}