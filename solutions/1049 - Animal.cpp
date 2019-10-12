/**
 * 1049 - Animal.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>
 
using namespace std;
 
int main()
{
    string inLvl_1, inLvl_2, inLvl_3;
    cin >> inLvl_1 >> inLvl_2 >> inLvl_3;
    
    string lvl_1[] = {"vertebrado", "invertebrado"};
    string lvl_2[] = {"ave", "mamifero", "inseto", "anelideo"};
    string lvl_3[] = {"carnivoro", "onivoro", "onivoro", "herbivoro",
                      "hematofago", "herbivoro", "hematofago", "onivoro"};
    string lvl_4[] = {"aguia", "pomba", "homem", "vaca",
                      "pulga", "lagarta", "sanguessuga", "minhoca"};
    
    for (int i = 0; i < 2; i++)
    {
        if (inLvl_1 == lvl_1[i])
        {
            if (i == 1) i = 2;

            if (inLvl_2 == lvl_2[i])
            {
                if (i == 2) i = 4;

                if (inLvl_3 == lvl_3[i])
                    cout << lvl_4[i] << endl;
                else if (inLvl_3 == lvl_3[i + 1])
                    cout << lvl_4[i + 1] << endl;
            }
            else if (inLvl_2 == lvl_2[i + 1])
            {
                if (i == 2) i = 4;

                if (inLvl_3 == lvl_3[i + 2])
                    cout << lvl_4[i + 2] << endl;
                else if (inLvl_3 == lvl_3[i + 3])
                    cout << lvl_4[i + 3] << endl;
            }
        }
    }
 
    return 0;
}