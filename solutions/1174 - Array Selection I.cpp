/**
 * 1174 - Array Selection I.cpp
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
	float n[100];

	for (int i = 0; i < 100; i++) cin >> n[i];

	for (int i = 0; i < 100; i++)
		if (n[i] <= 10)
			cout << "A[" << i << "] = " << fixed << setprecision(1) << n[i] << endl;

    return 0;
}