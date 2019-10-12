/**
 * 1010 - Simple Calculate.cpp
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
    struct product
    {
        unsigned int productCode;
        unsigned int units;
        float price;
    } typedef product;

    product num1;
    cin >> num1.productCode >> num1.units >> num1.price;

    product num2;
    cin >> num2.productCode >> num2.units >> num2.price;

    float total = (num1.price * num1.units) + (num2.price * num2.units);
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}