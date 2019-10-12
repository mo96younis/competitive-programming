/**
 * 1865 - Mjölnir
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int N;
    cin >> N;

    string name;
    int power;
    for (int i = 0; i < N; i ++)
    {
        cin >> name >> power;

        if (name == "Thor") cout << "Y\n";
        else cout << "N\n";
    }
    return 0;
}