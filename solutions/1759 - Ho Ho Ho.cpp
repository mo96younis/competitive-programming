/**
 * 1759 - Ho Ho Ho.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int n, r1, r2;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        cout << "Ho";

        if (i + 1 != n) cout << " ";
    }
    
    cout << "!" << endl;
    
    return 0;
}