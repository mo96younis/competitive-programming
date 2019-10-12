/**
 * 2061 - Closing Tabs
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int tabs, actions;
    cin >> tabs >> actions;

    for (int i = 0; i < actions; i++)
    {
        string act;
        cin >> act;

        if (act == "fechou") --tabs += 2;
        else --tabs;
    }
    cout << tabs << endl;

    return 0;
}