/**
 * 1984 - The Pronalância Puzzle.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;

    string rn = "";

    for (int i = n.length() - 1; i >= 0; i--) rn += n[i];

    cout << rn << endl;

    return 0;
}