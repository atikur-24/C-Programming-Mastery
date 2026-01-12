#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int N, T;
    scanf("%d %d", &N, &T);

    int books[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &books[i]);
    }

    int book_count = 0, time_count = 0;

    for (int i = 0; i < N; i++)
    {
        time_count += books[i];

        if (time_count > T)
        {
            break;
        }

        book_count++;
    }

    printf("%d\n", book_count);
    
    return 0;
}

/* 
Input:
10 33
1 3 4 6 8 10 12 15 23 36

Output:
6
 */