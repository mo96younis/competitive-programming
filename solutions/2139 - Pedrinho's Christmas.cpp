/**
 * 2139 - Pedrinho's Christmas.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

#define January	    31
#define February	29
#define March	    31
#define April   	30
#define May	        31
#define June	    30
#define July	    31
#define August	    31
#define September	30
#define October	    31
#define November	30
#define December	31

using namespace std;

unsigned int get_days(unsigned short int m, unsigned short int d)
{
    unsigned short int year_months[] = {January, February, March,
                                        April,   May,      June,
                                        July,    August,   September,
                                        October, November, December};
    unsigned int days = 0;
    for (unsigned short i = 0, n = 11 - m; i < n; i++)
        days += year_months[m + i];

    return days + (year_months[m - 1] - d + 25);
} 

int main()
{
    unsigned short int month, day;

    while (cin >> month >> day)
    {
        if (month == 12 && day == 24)
            cout << "E vespera de natal!" << endl;
        else if (month == 12 && day == 25)
            cout << "E natal!" << endl;
        else if (month == 12 && day > 25)
            cout << "Ja passou!" << endl;
        else
            cout << "Faltam " << get_days(month, day) << " dias para o natal!" << endl;
    }
    return 0;
}