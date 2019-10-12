/**
 * 1847 - Welcome to the Winter!.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    short int a, b, c;
    cin >> a >> b >> c;
    if     ((b > a && (c < b || c == b))              ||
            (b > a && c > b && ((c - b) < (b - a)))   ||
            (b < a && c < b && ((b - c) >= (a - b)))  ||
            (a == b && c <= b))
            {
                cout << ":(\n";
            }
    else if ((b < a && (c > b || c == b))             ||
             (b > a && c > b && ((c - b) >= (b - a))) ||
             (b < a && c < b && ((b - c) < (a - b)))  ||
             (a == b && c > b))
            {
                cout << ":)\n";
            }
    return 0;
}