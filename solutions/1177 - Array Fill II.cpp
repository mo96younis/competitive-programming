/**
 * 1177 - Array Fill II.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int n[1000];
	int t;

	do
	{
		cin >> t;
	}
	while(!(t >= 50 || t >= 2));

	for (int i = 0, j = 0; i < 1000; i++, j++)
	{
		n[i] = j % t;
		cout << "N[" << i << "] = " << n[i] << endl;
	}
    return 0;
}