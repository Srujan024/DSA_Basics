/*
Reverse Letter Triangle Pattern
Pattern 15
i/p: 10

ABCDE
ABCD
ABC
AB
A

*/
#include <stdio.h>

int main()
{
    int n = 8;
    for (int i = n; i > 0; i--)
    {
        for (char j = 'A'; j <= 'A' + i - 1; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}