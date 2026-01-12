#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int cs = 0; cs < t; cs++)
    {
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }

        for (int j = n - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
    
    return 0;
}

/* 
Input:
2
3
4

Output:
1 2 3 2 1
1 2 3 4 3 2 1
*/