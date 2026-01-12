/* Problem Description:
You work in a warehouse that stacks items in columns of boxes. Each column has boxes of different weights, and your task is to find the maximum weight that can be stacked without exceeding a weight limit. Given N columns and a weight limit, determine the maximum number of boxes you can stack by choosing one box from each column, such that the total weight is within the weight limit.

Input:
The first line contains two integers N (number of columns) and W (the weight limit).
The next N lines contain integers, each line representing the weights of boxes in a column. The number of boxes in each column may vary, but there will be at least one box per column.
Output:
A single integer representing the maximum number of boxes that can be stacked without exceeding the weight limit. If no valid combination exists, return -1.
Constraints:
1
≤
𝑁
≤
10
1≤N≤10
1
≤
𝑊
≤
1000
1≤W≤1000
Each box weight is between 1 and 100. */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXN 10
#define MAXW 1000
#define INF -100000

int dp[MAXN + 1][MAXW + 1];
int boxes[MAXN][100];
int cnt[MAXN];

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int N, W;
    scanf("%d %d", &N, &W);
    getchar();

    for (int i = 0; i < N; i++) {
        char line[1000];
        fgets(line, sizeof(line), stdin);

        cnt[i] = 0;
        char *token = strtok(line, " ");
        while (token) {
            boxes[i][cnt[i]++] = atoi(token);
            token = strtok(NULL, " ");
        }
    }

    for (int i = 0; i <= N; i++)
        for (int w = 0; w <= W; w++)
            dp[i][w] = INF;

    dp[0][0] = 0;

    for (int i = 1; i <= N; i++) {
        for (int w = 0; w <= W; w++) {
            dp[i][w] = max(dp[i][w], dp[i - 1][w]);

            for (int j = 0; j < cnt[i - 1]; j++) {
                int weight = boxes[i - 1][j];
                if (w >= weight && dp[i - 1][w - weight] != INF) {
                    dp[i][w] = max(dp[i][w], dp[i - 1][w - weight] + 1);
                }
            }
        }
    }

    int ans = -1;
    for (int w = 0; w <= W; w++) {
        ans = max(ans, dp[N][w]);
    }

    if (ans <= 0)
        printf("-1\n");
    else
        printf("%d\n", ans);

    return 0;
}


/*
Input:
3 10
2 3 4
3 6
5 1


Output:
3
*/