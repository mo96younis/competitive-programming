/**
 * 1154 - Ages.cpp
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
	int age;
	float ctr = 0;
	float sum = 0.0;
	while ((cin >> age) && age >= 0)
	{
		ctr++;
		sum += age;
	}
	cout << fixed << setprecision(2) << sum / ctr << endl;
    return 0;
}