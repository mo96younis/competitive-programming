/**
 * 2006 - Identifying Tea.cpp
 *
 * URI Online Judge <https://www.urionlinejudge.com.br>
 *
 * Mo Younis <mo96younis@gmail.com>
 */

#include <stdio.h>
 
int main() {
 
    int T, A, B, C, D, E, i, result = 0;

    scanf("%i %i %i %i %i %i", &T, &A, &B, &C, &D, &E);

    int ans[] = {A, B, C, D, E};

    for (i = 0; i < 5; i++)
        if (ans[i] == T) result++;

    printf("%i\n", result);
 
    return 0;
}