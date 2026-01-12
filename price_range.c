#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, X, Y;
    scanf("%d %d %d", &N, &X, &Y);

    int price[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &price[i]);
    }

    int smartphone_count = 0;

    for (int i = 0; i < N; i++)
    {
        if (price[i] >= X && price[i] <= Y)
        {
            smartphone_count++;
        }
    }

    printf("%d\n", smartphone_count);
    
    return 0;
}

/* 
Input:
10 4 8
8 7 2 3 1 10 25 8 13 5

Output:
4
*/