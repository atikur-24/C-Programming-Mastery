#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char S1[1000], S2[1000], S3[1000];
    scanf("%s %s %s", S1, S2, S3);

    if (strcmp(S1, S2) <= 0 && strcmp(S1, S3) <= 0)
    {
        printf("%s\n", S1);
    }
    else if (strcmp(S2, S1) <= 0 && strcmp(S2, S3) <= 0)
    {
        printf("%s\n", S2);
    }
    else
    {
        printf("%s\n", S3);
    }

    if (strcmp(S1, S2) >= 0 && strcmp(S1, S3) >= 0)
    {
        printf("%s\n", S1);
    }
    else if (strcmp(S2, S1) >= 0 && strcmp(S2, S3) >= 0)
    {
        printf("%s\n", S2);
    }
    else
    {
        printf("%s\n", S3);
    }
    
    return 0;
}

/*
Input:
abc def ghi

Output:
abc
ghi
*/