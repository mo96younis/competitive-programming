/**
 * 1024 - Encryption.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
    unsigned int testCases;
    cin >> testCases;

    // consume the leftover new line
    cin.get();

    while (testCases--)
    {
        // read a whole line including white spaces
        string line;
        getline(cin, line);

        // get the length of the line
        int length = line.length();

        // shift each alphabetic character three positions to the right
        for (int i = 0; i < length; i++)
            if (isalpha(line[i]))
                line[i] += 3;

        // reverse the string
        for (int i = 0, left = 0, right = length - 1, n = length / 2; i < n; i++, left++, right--)
        {
            char temp = line[left];
            line[left] = line[right];
            line[right] = temp;
        }

        // move each character from the last half one position to the left
        for (int i = length - 1, n = length / 2; i >= n; i--)
            line[i]--;

        // print the final, encrypted line
        cout << line << endl;
    }

    return 0;
}