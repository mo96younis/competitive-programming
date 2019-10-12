/**
 * 1914 - Whose Turn Is It?.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    int testCases;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        string name1, choice1, name2, choice2;
        int num1, num2;
        cin >> name1 >> choice1 >> name2 >> choice2 >> num1 >> num2;

        int sum = num1 + num2;

        if (sum % 2 == 0)
        {
            if (choice1 == "PAR") cout << name1;
            else cout << name2;
        }
        else
        {
            if (choice1 == "IMPAR") cout << name1;
            else cout << name2;
        }
        cout << '\n';
    }
    return 0;
}