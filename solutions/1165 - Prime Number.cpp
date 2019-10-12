/**
 * 1165 - Prime Number.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int n, x;
	bool isprime;

	do
	{
		cin >> n;
	}
	while (!(n >= 1 && n <= 100));

	for (int times = 0; times < n; times++)
	{
		cin >> x;
		isprime = false;

		for (int i = 2; i <= x / 2; i++)
		{
			if (x % i == 0)
			{
				isprime = true;
				break;
			}
		}

		if (isprime == true || x == 1) cout << x << " nao eh primo" << endl;
		else cout << x << " eh primo" << endl;
	}
    return 0;
}