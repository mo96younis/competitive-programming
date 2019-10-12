/**
 * 1020 - Age in Days.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

#define DAYS_IN_YEAR  365
#define DAYS_IN_MONTH 30

int main()
{
    int ageInDays;
    cin >> ageInDays;

    // convert days to years
    int years = ageInDays / DAYS_IN_YEAR;

    // convert days to months where months can also be calculated by
    int months = (ageInDays % DAYS_IN_YEAR) / DAYS_IN_MONTH;

    // assign to the rest of the days where days can also be calculated by
    int days = (ageInDays % DAYS_IN_YEAR) % DAYS_IN_MONTH;

    cout << years  << " ano(s)"  << endl;
    cout << months << " mes(es)" << endl;
    cout << days   << " dia(s)"  << endl;

    return 0;
}