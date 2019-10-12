/**
 * 1175 - Array change I.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int n[20];
	int temp;

	for (int i = 0; i < 20; i++) cin >> n[i];

	for (int i = 0, ctr1 = 0, ctr2 = 19; i < 10; i++, ctr1++, ctr2--)
	{
		temp = n[ctr1];
		n[ctr1] = n[ctr2];
		n[ctr2] = temp;
	}

	for (int i = 0; i < 20; i++) cout << "N[" << i << "] = " << n[i] << endl;

    return 0;
}