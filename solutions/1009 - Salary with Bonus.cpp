/**
 * 1009 - Salary with Bonus.cpp
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
    string name;
    double salary, totalValue;
    cin >> name >> salary >> totalValue;
    
    double tSalary = salary + (totalValue * 0.15);
    cout << "TOTAL = R$ " << fixed << setprecision(2) << tSalary << endl;
    
    return 0;
}