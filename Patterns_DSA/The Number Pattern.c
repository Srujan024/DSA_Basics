/*
The Number Pattern
Pattern 22
i/p: 5

4444444
4333334
4322234
4321234
4322234
4333334
4444444

HINT: Perform (n-values)
0000000
0111110
0122210
0123210
0122210
0111110
0000000

This is the min distance of each point from all sides considered
print n-min(distance from all sides)   
*/
#include <stdio.h>
int min(int x, int y);

int main()
{
    int n = 4;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            // Distances from a point in the matrix
            int top = i;
            int left = j;
            int right = (2 * n - 1) - 1 - j;
            int bottom = (2 * n - 1) - 1 - i;
            printf("%d", n - min(min(top, bottom), min(left, right)));
        }
        printf("\n");
    }
    return 0;
}

int min(int x, int y)
{
    return x < y ? x : y;
}