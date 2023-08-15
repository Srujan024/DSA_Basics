/*
Half Diamond Star Pattern
Pattern 10
i/p: 5

*
**
***
****
*****
****
***
**
*

*/
#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < (2 * n - 1) / 2)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        else
        {
            for (int j = 0; j < 2 * n - i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}