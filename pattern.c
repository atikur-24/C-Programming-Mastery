#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
        int n;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        }

        for (int i = n - 1; i >= 1; i--)
        {
            for (int j = 1; j <= (n - i); j++)
            {
                printf(" ");
            }

            for (int j = 1; j <= i; j++)
            {
                printf("%d", j);
            }
            printf("\n");
        } 
    return 0;
}


/* 
Input:

5

Output:

1
12
123
1234
12345
 1234
  123
   12
    1
 */