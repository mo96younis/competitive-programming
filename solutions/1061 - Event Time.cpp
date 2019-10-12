/**
 * 1061 - Event Time.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{
    string s;
    char c;

    int dStart, hStart, mStart, sStart;
    cin >> s >> dStart >> hStart >> c >> mStart >> c >> sStart;

    int dEnd, hEnd, mEnd, sEnd;
    cin >> s >> dEnd >> hEnd >> c >> mEnd >> c >> sEnd;
    
    // calculate the number of days
    int W = dEnd - dStart;
    
    // calculate the number of hours
    int X = hEnd - hStart;
    if (X < 0)
    {
        X += 24;
        W--;
    }
    
    // calculate the number of minutes
    int Y = mEnd - mStart;
    if (Y < 0)
    {
        Y += 60;
        X--;
    }
    
    // calculate the number of seconds
    int Z = sEnd - sStart;
    if (Z < 0)
    {
        Z += 60;
        Y--;
    }
    
    cout << W << " dia(s)" << endl;
    cout << X << " hora(s)" << endl;
    cout << Y << " minuto(s)" << endl;
    cout << Z << " segundo(s)" << endl;
 
    return 0;
}