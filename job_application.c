#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d", &N);

    int experience[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &experience[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (experience[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (experience[i] >= 1 && experience[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (experience[i] >= 4 && experience[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate\n");
        }
    }
    
    return 0;
}


/* 
Input:
4
4
0
3
8

Output:
Mid-level candidate
Entry-level candidate
Junior candidate
Senior candidate
*/