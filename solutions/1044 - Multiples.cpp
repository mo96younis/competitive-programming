/**
 * 1044 - Multiples.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;

int main()
{ 
    int A, B;
    cin >> A >> B;

    cout << (A % B == 0 || B % A == 0? "Sao Multiplos" : "Nao sao Multiplos") << endl;
 
    return 0;
}