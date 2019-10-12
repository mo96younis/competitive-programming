/**
 * 1012	- Area.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

#define Pi 3.14159
#define SET_PRECISION fixed << setprecision(3)

int main()
{
    float a, b, c;
    cin >> a >> b >> c;

    double result;

    // print the area of the rectangled triangle that has base a and height c
    result = 0.5 * a * c;
    cout << "TRIANGULO: " << SET_PRECISION << result << endl;

    // print the area of the radius's circle c
    result = Pi * pow(c, 2);
    cout << "CIRCULO: " << SET_PRECISION << result << endl;

    // print the area of the trapezium which has a and b by base and height c
    result = ((a + b) / 2) * c;
    cout << "TRAPEZIO: " << SET_PRECISION << result << endl;

    // print the area of the square that has side b
    result = pow(b, 2);
    cout << "QUADRADO: " << SET_PRECISION << result << endl;

    // print the area of the rectangle that has sides a and b
    result = a * b;
    cout << "RETANGULO: " << SET_PRECISION << result << endl;

    return 0;
}