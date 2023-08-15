/*
Alpha-Ramp Pattern
Pattern 16
i/p: 10

A
BB
CCC
DDDD
EEEEE

*/
#include <stdio.h>

int main()
{
    int n = 5;
    char alpha = 'A';
    for (int i = 1; i <= n; i++, alpha += 1)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", alpha);
        }
        printf("\n");
    }
    return 0;
}