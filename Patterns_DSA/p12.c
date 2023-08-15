/*
Number Crown Pattern
Pattern 12
i/p: 5

1        1
12      21
123    321
1234  4321
1234554321

i/p: 9

1                1
12              21
123            321
1234          4321
12345        54321
123456      654321
1234567    7654321
12345678  87654321
123456789987654321

*/
#include <stdio.h>

int main()
{
    int n = 9;
    int k = 2 * n - 2;
    for (int i = 1; i <= n; i++, k -= 2)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = 1; j <= k; j++)
        {
            printf(" ");
        }
        for (int j = i; j > 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}