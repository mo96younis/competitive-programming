/**
 * 1985 - MacPRONALTS.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, float> list = {
        {1001, 1.50},
        {1002, 2.50},
        {1003, 3.50},
        {1004, 4.50},
        {1005, 5.50}
    };

    float price = 0.0;
    for (int i = 0; i < n; i++)
    {
        int id, q;
        cin >> id >> q;

        price += list.at(id) * q;
    }
    cout << fixed << setprecision(2) << price << endl;

    return 0;
}