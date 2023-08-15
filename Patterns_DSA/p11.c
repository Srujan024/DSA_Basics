/*
Binary Number Triangle Pattern
Pattern 11
i/p: 5

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/
#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = i; j > 0; j--)
            {
                printf("%d ", j % 2);
            }
            printf("\n");
        }
        else
        {
            for (int j = i; j > 0; j--)
            {
                printf("%d ", j % 2);
            }
            printf("\n");
        }
    }
    return 0;
}