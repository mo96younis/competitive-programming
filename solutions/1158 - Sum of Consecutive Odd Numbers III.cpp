/**
 * 1158 - Sum of Consecutive Odd Numbers III.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int n, x, y;
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if (x % 2 == 0)
		{
			x++;
			sum += x;
		}
		else sum += x;
		for (int j = 0; j < y - 1; j++, x += 2) sum += (x + 2);
		cout << sum << endl;
		sum = 0;
	}
    return 0;
}