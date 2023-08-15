/*
Inverted Star Pyramid
Pattern 8
i/p: 4

* * * * * * *
  * * * * *
    * * *
      *

*/
#include <stdio.h>

int main()
{
    int n = 4;
    int k = 2 * n - 1;
    for (int i = 0; i < n; i++, k -= 2)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < k; j++)
        {
            printf("*");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}