/**
 * 1048 - Salary Increase.cpp
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
    float salary;
    cin >> salary;
    
    float increasePer = 0;
    unsigned int per = 0;

    if (salary > 0 && salary <= 400.00)
    {
        increasePer = (salary * 15) / 100;
        per = 15;
    }
    else if (salary >= 400.01 && salary <= 800.00)
    {
        increasePer = (salary * 12) / 100;
        per = 12;
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        increasePer = (salary * 10) / 100;
        per = 10;
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        increasePer = (salary * 7) / 100;
        per = 7;
    }
    else if (salary > 2000.00)
    {
        increasePer = (salary * 4) / 100;
        per = 4;
    }
    
    cout << fixed << setprecision(2);

    cout << "Novo salario: "   << increasePer + salary << endl;
    cout << "Reajuste ganho: " << increasePer          << endl;
    cout << "Em percentual: "  << per << " %"          << endl;
 
    return 0;
}