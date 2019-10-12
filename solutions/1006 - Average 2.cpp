/**
 * 1006 - Average 2.cpp
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
    double a, b, c;
    cin >> a >> b >> c;

    double average = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);
    cout << "MEDIA = " << fixed << setprecision(1) << average << endl;

    return 0;
}