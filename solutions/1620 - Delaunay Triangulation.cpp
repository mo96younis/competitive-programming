/**
 * 1620 - Delaunay Triangulation.cpp
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
    long double L;
 
    while (cin >> L && L != 0)
    {
        long double X = (((L - 3) + L) - L) / L;
        cout << fixed << setprecision(6) << X << endl;
    }
    return 0;
}