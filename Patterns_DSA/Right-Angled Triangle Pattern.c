/*
Right-Angled Triangle Pattern
Pattern 2
i/p: 4

*
* *
* * *
* * * *

*/
#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}