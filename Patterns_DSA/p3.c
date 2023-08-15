/*
Right-Angled Number Pyramid
Pattern 3
i/p: 5

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int num = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

/*
int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/