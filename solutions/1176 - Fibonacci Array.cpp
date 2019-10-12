/**
 * 1176 - Fibonacci Array.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int t, n;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		unsigned long long int inj1 = 0, inj2 = 1, next = 0;

		for (int j = 0; j < n; j++)
		{
			next = (inj1 + inj2);
			inj1 = inj2;
			inj2 = next;
		}
		cout << "Fib(" << n << ") = " << inj1 << endl;
	}
    return 0;
}