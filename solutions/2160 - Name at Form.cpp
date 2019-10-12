/**
 * 2160 - Name at Form.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char l[82];
    cin.getline(l, sizeof(l));

    strlen(l) > 80? cout << "NO\n" : cout << "YES\n";

    return 0;
}