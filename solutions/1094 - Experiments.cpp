/**
 * 1094 - Experiments.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>

#define endl '\n'

using namespace std;

int main()
{
    int N;
    cin >> N;

    float C = 0, R = 0, S = 0;

    for (int i = 0; i < N; i++)
    {
        int Amount;
        cin >> Amount;

        char animal;
        cin >> animal;

        animal == 'C'? C += Amount : (animal == 'R'? R += Amount : S += Amount);
    }
    
    float sum = C + R + S;
    
    cout << "Total: " << sum << " cobaias" << endl;
    
    cout << "Total de coelhos: " << C << endl;
    cout << "Total de ratos: " << R << endl;
    cout << "Total de sapos: " << S << endl;
    
    cout << fixed << setprecision(2);

    cout << "Percentual de coelhos: " << (C * 100) / sum << " %" << endl;
    cout << "Percentual de ratos: " << (R * 100) / sum << " %" << endl;
    cout << "Percentual de sapos: " << (S * 100) / sum << " %" << endl;
   
    return 0;
}