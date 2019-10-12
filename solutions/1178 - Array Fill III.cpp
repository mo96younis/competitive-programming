/**
 * 1178 - Array Fill III.cpp
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
	double n[100];
	double x;

	cin >> x;

	for (int i = 0; i < 100; i++)
	{
		n[i] = x;
		x /= 2;
		cout << "N[" << i << "] = " << fixed << setprecision(4) << n[i] << endl;
	}
    return 0;
}