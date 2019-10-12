/**
 * 2126 - Searching Subsequences.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <iostream>

using namespace std;

unsigned int get_subsequences(string n1, string n2);
unsigned int get_supstring_pos(string n1, string n2);

int main()
{
    string n1, n2;

    unsigned int i = 0;
    while (cin >> n1 >> n2)
    {
        // print the case number
        cout << "Caso #" << ++i << ":" << endl;

        unsigned int subsequences_num = get_subsequences(n1, n2);
        unsigned int pos = get_supstring_pos(n1, n2);
        if (subsequences_num != 0)
        {
            cout << "Qtd.Subsequencias: " << subsequences_num << endl;
            cout << "Pos: " << pos << endl;
        }
        else
        {
            cout << "Nao existe subsequencia" << endl;
        }
        cout << endl;
    }
    return 0;
}

unsigned int get_subsequences(string n1, string n2)
{
    unsigned int n1_len = n1.length();
    unsigned int subsequences_num = 0;
    while (true)
    {
        size_t pos = n2.find(n1);
        if (pos != string::npos)
        {
            subsequences_num++;
            n2.erase(pos, n1_len);
        }
        else
        {
            break;
        }
    }
    return subsequences_num;
}

unsigned int get_supstring_pos(string n1, string n2)
{
    size_t pos = n2.rfind(n1);
    if (pos != string::npos)
        return pos + 1;
    else
        return 0;
}