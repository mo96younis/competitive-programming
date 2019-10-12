/**
 * 1837 - Preface.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int a, b, q, r;
    cin >> a >> b;
    q = a / b;
    r = a % b;
    while (q * b > a)
    {   
        if ((a > b || a < b) && a < 0 && b < 0)
        {
            q++;
        }
        else if (a < b && a < 0 && b > 0)
        {
            q--;
        }
        else
        {
            break;
        }
        r = a - (b * q);
    }
    cout << q << " " << r << '\n';
    return 0;
}