/*
Symmetric-Void Pattern
Pattern 19
i/p: 5

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/
#include <stdio.h>

int main()
{
    int n = 3;
    int k = 2 * n - 2;
    int minus = -1;
    for (int i = 1; i <= n; i++, minus++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        for (int j = 0; j < i + minus; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= n; i++, k -= 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}