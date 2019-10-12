/**
 * 2147 - Galopeira.cpp
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
    unsigned short int test_cases;
    cin >> test_cases;

    string galopeira;
    while (test_cases--)
    {
        cin >> galopeira;
        cout << fixed << setprecision(2) << galopeira.length() * 0.01 << endl;
    }
    return 0;
}