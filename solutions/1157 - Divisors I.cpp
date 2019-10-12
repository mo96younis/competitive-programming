/**
 * 1157 - Divisors I.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		if (n % i == 0) cout << i << endl;
    return 0;
}