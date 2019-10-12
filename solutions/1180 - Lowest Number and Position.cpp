/**
 * 1180 - Lowest Number and Position.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
	int pos = 0;
	int min = INT_MAX;

	int n;
	cin >> n;

	int x[n];

	for (int i = 0; i < n; i++)
	{
		cin >> x[i];

		if (x[i] < min)
		{
			min = x[i];
			pos = i;
		}
	}

	cout << "Menor valor: " << min << endl;
	cout << "Posicao: " << pos << endl;
	
    return 0;
}