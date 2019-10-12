/**
 * 1160 - Population Increase.cpp
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
	int t, pa, pb;
	float ga, gb;

	do
	{
		cin >> t;
	}
	while (!(t >= 1 && t <= 3000));

	for (int times = 0; times < t; times++)
	{
		cin >> pa >> pb >> ga >> gb;
		int yrs = 0;
		while (pa <= pb)
		{
			pa += (pa * (ga / 100));
			pb += (pb * (gb / 100));
			yrs++;
			if (yrs > 100)
			{
				cout << "Mais de 1 seculo." << endl;
				break;
			}
		}
        if (yrs <= 100) cout << yrs << " anos." << endl;
	}
    return 0;
}