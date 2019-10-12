/**
 * 2003 - Sunday Morning.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string t;
    while (cin >> t)
    {
        string smin = "";
        smin += t[2];
        smin += t[3];

        int min  = stoi(smin) + 60;
        int hour = (t[0] - '0') * 60 + min;

        int late = hour - (8 * 60);
        if (late < 0) late = 0;

        cout << "Atraso maximo: " << late << endl;
    }
    return 0;
}