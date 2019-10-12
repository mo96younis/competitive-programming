/**
 * 1164 - Perfect Number.cpp
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
	int sum;

	do
	{
		cin >> n;
	}
	while (!(n >= 1 && n <= 100));

	for (int times = 0; times < n; times++)
	{
		sum = 0;
		cin >> x;

		for (int i = x - 1; i > 0; i--) if (x % i == 0) sum += i;

		if (sum == x) cout << x << " eh perfeito" << endl;
		else cout << x << " nao eh perfeito" << endl;
	}
    return 0;
}