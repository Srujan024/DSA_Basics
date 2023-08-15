/*
Alpha-Triangle Pattern
Pattern 18
i/p: 5

E
D E
C D E
B C D E
A B C D E

*/
#include <stdio.h>

int main()
{
    int n = 5;
    char ch = 'A' + n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (char j = ch - i + 1; j <= ch; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}