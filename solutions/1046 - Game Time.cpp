/**
 * 1046 - Game Time.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{ 
    int start, end;
    cin >> start >> end;

    int result = 0;

    if (start != end)
        for (int i = start; i != end; i++, i %= 24)
            result++;
    else
        result = 24;

    cout << "O JOGO DUROU " << result << " HORA(S)" << endl;
 
    return 0;
}