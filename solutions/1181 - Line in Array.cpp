/**
 * 1181 - Line in Array.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <limits.h>
#include <iomanip>

using namespace std;

int main()
{
	float M[12][12];
	int line;
	float sum = 0;
	char operation;

	cin >> line >> operation;

	for (int i = 0; i < 12; i++)
		for (int j = 0; j < 12; j++)
			cin >> M[i][j];

	for (int i = 0; i < 12; i++) sum += M[line][i];

	if (operation == 'S') cout << sum << endl;
    
	else if (operation == 'M')
		cout << fixed << setprecision(1) << sum / 12 << endl;

    return 0;
}