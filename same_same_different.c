#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a1[105], a2[105], a3[105];
    scanf("%s %s %s", &a1, &a2, &a3);

    int len = strlen(a1);

    int count = 0;

    for (int i = 0; i < len; i++)
    {
        if (a1[i] != a2[i] && a2[i] != a3[i] && a1[i] != a3[i])
        {
            count += 2;
        }
        else if (a1[i] != a2[i] || a2[i] != a3[i] || a1[i] != a3[i])
        {
            count += 1;
        }
    }

    printf("%d\n", count);
    
    return 0;
}


/*
Input:
train
candy
bread

Output:
9
*/