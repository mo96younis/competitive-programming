/**
 * 1052 - Month.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{
    int numberOfMonth;
    cin >> numberOfMonth;
 
    string month[] = {"January", "February", "March", "April",
                      "May", "June", "July", "August", "September",
                      "October", "November", "December"};

    cout << month[numberOfMonth - 1] << endl;
 
    return 0;
}