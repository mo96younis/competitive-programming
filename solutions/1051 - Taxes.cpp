/**
 * 1051 - Taxes.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

float caltax(float salary, float taxrate);

int main()
{
    float salary;
    cin >> salary;

    cout << fixed << setprecision(2);

    if (salary <= 2000.00)
        cout << "Isento" << endl;
    else if (salary <= 3000.00)
        cout << "R$ " << caltax(salary, 3000.00) << endl;
    else if (salary <= 4500.00)
        cout << "R$ " << caltax(salary, 4500.00) << endl;
    else
        cout << "R$ " << caltax(salary, 4500.01) << endl;
 
    return 0;
}

float caltax(float salary, float taxrate)
{
    if (taxrate == 3000.00)
        return ((salary - 2000) * 0.08);
    else if (taxrate == 4500.00)
        return caltax(3000, 3000) + ((salary - 3000) * 0.18);
    else
        return caltax(4500, 4500) + ((salary - 4500) * 0.28);
}