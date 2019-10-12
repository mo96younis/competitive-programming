/**
 * 1036 - Bhaskara's Formula.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    double underSqrRoot = (B * B) - (4 * A * C);

    if (A == 0 || underSqrRoot < 0)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << fixed << setprecision(5);

        double sqrRoot = sqrt(underSqrRoot);
        double denominator = (2 * A);

        cout << "R1 = " << (-B + sqrRoot) / denominator << endl;
        cout << "R2 = " << (-B - sqrRoot) / denominator << endl;
    }

    return 0;
}