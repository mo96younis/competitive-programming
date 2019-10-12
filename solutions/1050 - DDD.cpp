/**
 * 1050 - DDD.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{
    int DDD;    
    cin >> DDD;

    cout << (DDD == 61? "Brasilia"       :
             DDD == 71? "Salvador"       :
             DDD == 11? "Sao Paulo"      :
             DDD == 21? "Rio de Janeiro" :
             DDD == 32? "Juiz de Fora"   :
             DDD == 19? "Campinas"       :
             DDD == 27? "Vitoria"        :
             DDD == 31? "Belo Horizonte" : "DDD nao cadastrado")
         << endl;
 
    return 0;
}