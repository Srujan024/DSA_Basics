/*
Increasing Right-Angled Letter Triangle Pattern
Pattern 14
i/p: 10

A
AB
ABC
ABCD
ABCDE
ABCDEF
ABCDEFG
ABCDEFGH
ABCDEFGHI
ABCDEFGHIJ

*/
#include <stdio.h>

int main()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}