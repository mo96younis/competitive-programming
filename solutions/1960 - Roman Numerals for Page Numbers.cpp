/**
 * 1960 - Roman Numerals for Page Numbers
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string huns[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    string tens[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    string ones[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    string roman = "";

    roman += huns[(n % 1000 - n % 100) / 100];
    roman += tens[(n % 100 - n % 10) / 10];
    roman += ones[n % 10];

    cout << roman << endl;

    return 0;
}