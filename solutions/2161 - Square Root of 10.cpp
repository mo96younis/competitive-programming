/**
 * 2161 - Square Root of 10.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double n, result = 0.0;
    cin >> n;

    while (n--) result = 1 / (result += 6.0);
    
    cout << fixed << setprecision(10) << 3 + result << endl;

    return 0;
}