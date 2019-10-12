/**
 * 1019 - Time Conversion.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

#define SECONDS_IN_HOUR   3600
#define SECONDS_IN_MINUTE 60

int main()
{
    unsigned int totalSeconds;
    cin >> totalSeconds;

    int hours = 0, minutes = 0, seconds = 0;

    // convert seconds to hours
    hours = totalSeconds / SECONDS_IN_HOUR;

    // convert seconds to minutes
    minutes = (totalSeconds % SECONDS_IN_HOUR) / SECONDS_IN_MINUTE;

    // assign to the rest of the seconds
    seconds = totalSeconds % SECONDS_IN_MINUTE;

    cout << hours << ':' << minutes << ':' << seconds << endl;

    return 0;
}