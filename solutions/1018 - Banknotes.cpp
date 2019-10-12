/**
 * 1018 - Banknotes.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    // get the amount of money
    int n;
    cin >> n;

    cout << n << endl;

    // define all possible banknote values (easier to access that way)
    int banknoteValue[] = {100, 50, 20, 10, 5, 2, 1};

    // iterate over all banknote values
    for (int i = 0; i < 7; i++)
    {
        // store the number of banknotes
        unsigned int numberOfBanknotes = 0;

        // start calculating the number of banknotes
        while (n >= banknoteValue[i])
        {
            // increment the number of banknotes by one
            numberOfBanknotes++;

            // decrement the amount of money by the current banknote value
            n -= banknoteValue[i];
        }

        cout << numberOfBanknotes << " nota(s) de R$ ";
        cout << banknoteValue[i] << ",00" << endl;
    }

    return 0;
}