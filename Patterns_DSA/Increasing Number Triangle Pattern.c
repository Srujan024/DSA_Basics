/*
Increasing Right-Angled Number Triangle Pattern
Pattern 13
i/p: 5

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/
#include <stdio.h>

int main()
{
    int n = 6;
    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}