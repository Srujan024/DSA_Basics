/*
Symmetric-Butterfly Pattern
Pattern 20
i/p: 5

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int n = 5;
    int k = 2 * n - 2;
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
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            printf("*");
        }
        for (int j = 1; j <= i * 2; j++)
        {
            printf(" ");
        }
        for (int j = i; j <= n - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}