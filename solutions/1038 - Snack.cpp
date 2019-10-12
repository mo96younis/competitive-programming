/**
 * 1038 - Snack.cpp
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
    int X, Y;
    cin >> X >> Y;

    float item[] = {4.00, 4.50, 5.00, 2.00, 1.50};

    cout << "Total: R$ " << fixed << setprecision(2) << item[X - 1] * Y << endl;

    return 0;
}