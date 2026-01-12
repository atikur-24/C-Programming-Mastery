#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long multiplication = a * b * c;

        if (multiplication == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
        }
        else if (m % multiplication == 0)
        {
            long long missing_num = m / multiplication;

            printf("%lld\n", missing_num);
        }
        else
        {
            printf("-1\n");
        }
    }
    
    return 0;
}


/* Sample Input 0:
4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15

Sample Output 0:
5
-1
-1
0
------------------------
Sample Input 1:
3
20 5 1 1
18 2 3 3
0 10 20 30

Sample Output 1:
4
1
0
*/