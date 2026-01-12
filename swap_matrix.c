#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int matrix[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][0];

        matrix[i][0] = matrix[i][m - 1];

        matrix[i][m - 1] = temp;
    }

    for (int i = 0; i < m; i++)
    {
        int temp = matrix[0][i];

        matrix[0][i] = matrix[n - 1][i];

        matrix[n - 1][i] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        
        printf("\n");
    }

    
    return 0;
}


/*
Input:
3 4
1 2 3 4
5 6 7 8
6 5 4 2

Output:
2 5 4 6
8 6 7 5
4 2 3 1
*/