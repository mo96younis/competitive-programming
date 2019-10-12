/**
 * 1043 - Triangle.cpp
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
    float A, B, C;
    cin >> A >> B >> C;

    cout << fixed << setprecision(1);

    if (A + B > C && A + C > B && B + C > A)
        cout << "Perimetro = " << A + B + C << endl;
    else
        cout << "Area = " << (A + B) * (C / 2) << endl;
 
    return 0;
}