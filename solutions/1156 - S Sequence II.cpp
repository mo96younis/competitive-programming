/**
 * 1156 - S Sequence II.cpp
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
	float sum = 1;
	for (float i = 3, j = 2; i <= 39; i += 2, j *= 2) sum += (i / j);
	cout << fixed << setprecision(2) << sum << endl;
    return 0;
}