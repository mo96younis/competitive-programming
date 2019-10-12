/**
 * 1173 - Array fill I.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int n[10];
	int v;

	cin >> v;

	for (int i = 0; i < 10; i++)
	{
		n[i] = v;
		v *= 2;
		cout << "N[" << i << "] = " << n[i] << endl;
	}
    return 0;
}