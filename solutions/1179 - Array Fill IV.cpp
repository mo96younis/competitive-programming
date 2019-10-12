/**
 * 1179 - Array Fill IV.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

int main()
{
	int par[5];
	int impar[5];
	int x;
	int p = 0, im = 0;

	for (int i = 0; i < 15; i++)
	{
		cin >> x;

		if (x % 2 == 0)
		{
			par[p] = x;
			p++;

			if (p == 5)
			{
				for (int j = 0; j < p; j++)
                    cout << "par[" << j << "] = " << par[j] << endl;
				p = 0;
			}
		}
		else
		{
			impar[im] = x;
			im++;

			if (im == 5)
			{
				for (int j = 0; j < im; j++)
					cout << "impar[" << j << "] = " << impar[j] << endl;
				im = 0;
			}
		}
	}

	for (int j = 0; j < im; j++)
		cout << "impar[" << j << "] = " << impar[j] << endl;

	for (int j = 0; j < p; j++)
        cout << "par[" << j << "] = " << par[j] << endl;

    return 0;
}