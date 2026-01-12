#include <stdio.h>
#include <math.h>

/* Problem: absolute difference between the summation of the matrix main diagonals (primary diagonal and secondary diagonal) */

int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int main_diagonal = 0, secondary_diagonal = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                main_diagonal += a[i][j];
            }

            if (i + j == n - 1)
            {
                secondary_diagonal += a[i][j];
            }
        }
    }

    int difference = abs(main_diagonal - secondary_diagonal);

    printf("%d", difference);

    return 0;
}

/* 
Input:
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6

Output:
22
*/