/**
 * 1045 - Triangle Types.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    double max = A;
    if (B > max) max = B;
    if (C > max) max = C;

    double min = A;
    if (B < min) min = B;
    if (C < min) min = C;

    double cent = B != max && B != min? B : C != max && C != min? C : A;

    if (max >= (cent + min))
    {
        puts("NAO FORMA TRIANGULO");
        return 0;
    }

    if ((max * max) == ((cent * cent) + (min * min)))
        cout << "TRIANGULO RETANGULO" << endl;
    if ((max * max) > ((cent * cent) + (min * min)))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if ((max * max) < ((cent * cent) + (min * min)))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if ((max == cent) && (cent == min))
        cout << "TRIANGULO EQUILATERO" << endl;
    if (((max == cent) && (max != min)) || ((cent == min) && (cent != max)))
        cout << "TRIANGULO ISOSCELES" << endl;
 
    return 0;
}