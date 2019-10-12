/**
 * 2162 - Peaks and Valleys.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <regex>

using namespace std;

int main()
{
    unsigned short int n;
    cin >> n;

    short int land[n];
    string result = "1";

    for (int i = 0; i < n; i++) cin >> land[i];
 
    if (n == 2 && land[0] == land[1])
    {
        result = "0";
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (land[i] >= land[i - 1] && land[i - 1] >= land[i - 2]
                || land[i] <= land[i - 1] && land[i - 1] <= land[i - 2])
            {
                result = "0";
                break;
            }
        }
    } 
    cout << result << endl;

    return 0;
}