/**
 * 1047 - Game Time with Minutes.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;

int main()
{ 
    int startH, startM, endH, endM;
    cin >> startH >> startM >> endH >> endM;
    
    int hResult = endH - startH;

    if (hResult < 0)
        hResult = 24 + (endH - startH);
    else if (startH == endH && endH == startM && startM == endM)
        hResult = 24;
        
    int mResult = endM - startM;
    
    if (mResult < 0)
    {
        hResult--;
        mResult += 60;
    }
    
    cout << "O JOGO DUROU " << hResult << " HORA(S) E " << mResult << " MINUTO(S)" << endl;

    return 0;
}