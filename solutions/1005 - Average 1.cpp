/**
 * 1005 - Average 1.cpp
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
    double x, y;
    cin >> x >> y;

    double average = ((x * 3.5) + (y * 7.5)) / (3.5 + 7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << average << endl;
    
    return 0;
}