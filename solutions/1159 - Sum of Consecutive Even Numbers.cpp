/**
 * 1159 - Sum of Consecutive Even Numbers.cpp
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
	int sum = 0;
	while ((cin >> x) && x != 0)
	{
		if (x % 2 != 0)
		{
			x++;
			sum += x;
		}
		else sum += x;
		for (int j = 0; j < 4; j++, x+=2) sum += (x + 2);
		cout << sum << endl;
		sum = 0;
	}
    return 0;
}