/**
 * 1008 - Salary.cpp
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
    unsigned int number, hours;
	float moneyPerHour;
    cin >> number >> hours >> moneyPerHour;

    cout << "NUMBER = " << number << endl;

    float salary = hours * moneyPerHour;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}