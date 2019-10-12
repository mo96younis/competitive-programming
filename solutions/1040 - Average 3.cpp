/**
 * 1040 - Average 3.cpp
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
    float N1, N2, N3, N4;
    cin >> N1 >> N2 >> N3 >> N4;

    double Media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / (2 + 3 + 4 + 1);

    cout << fixed << setprecision(1);

    cout << "Media: " << Media << endl;

    if (Media >= 7)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (Media < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (Media >= 5.0 && Media <= 6.9)
    {
        cout << "Aluno em exame." << endl;

        double examScore;
        cin >> examScore;

        cout << "Nota do exame: " << examScore << endl;

        double mediaFinal = (examScore + Media) / 2;

        if (mediaFinal >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else if (mediaFinal <= 4.9)
        {
            cout << "Aluno reprovado." << endl;
        }
        cout << "Media final: " << mediaFinal << endl;
    }

    return 0;
}