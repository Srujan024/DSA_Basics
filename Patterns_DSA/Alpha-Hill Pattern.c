/*
Alpha-Hill Pattern
Pattern 17
i/p: 4

   A
  ABA
 ABCBA
ABCDCBA

*/
#include <stdio.h>

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("%c", ch);
            if (j < (2 * i + 1) / 2)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}