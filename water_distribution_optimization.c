// Problem 1: Water Distribution Optimization
// Problem Description:
// In a small town, water is supplied to different areas through a network of pipes. The town council wants to minimize water loss by optimizing the distribution process. The town's water system is represented as a grid where each cell is a section of pipe. The amount of water that flows through each pipe is given as an integer value. Your task is to find the maximum amount of water that can be supplied from the top-left corner of the grid to the bottom-right corner by only moving right or down.

// Input:
// The first line contains two integers N and M representing the number of rows and columns of the grid.
// The next N lines contain M integers each, representing the amount of water that flows through each pipe in the grid.
// Output:
// A single integer representing the maximum amount of water that can flow from the top-left corner to the bottom-right corner.
// Constraints:
// 2
// ≤
// 𝑁
// ,
// 𝑀
// ≤
// 100
// 2≤N,M≤100
// Each water flow value is between 1 and 1000.
// Example:


#include <stdio.h>

#define MAX 101

int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int grid[MAX][MAX];
    int dp[MAX][MAX];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    dp[0][0] = grid[0][0];

    for (int j = 1; j < M; j++) {
        dp[0][j] = dp[0][j - 1] + grid[0][j];
    }

    for (int i = 1; i < N; i++) {
        dp[i][0] = dp[i - 1][0] + grid[i][0];
    }

    for (int i = 1; i < N; i++) {
        for (int j = 1; j < M; j++) {
            dp[i][j] = grid[i][j] + max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    printf("%d\n", dp[N - 1][M - 1]);

    return 0;
}


/*
Input:
3 3
5 3 2
1 9 1
4 2 1


Output:
20
*/