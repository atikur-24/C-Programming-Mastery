#include <stdio.h>
#include <limits.h>

#define MAX 101
#define INF INT_MAX

int graph[MAX][MAX];
int dist[MAX];
int visited[MAX];

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            graph[i][j] = INF;
        }
    }

    for (int i = 0; i < M; i++) {
        int u, v, d;
        scanf("%d %d %d", &u, &v, &d);

        if (d < graph[u][v]) {
            graph[u][v] = d;
            graph[v][u] = d;
        }
    }

    int source, destination;
    scanf("%d %d", &source, &destination);

    for (int i = 1; i <= N; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[source] = 0;

    for (int i = 1; i <= N; i++) {
        int minDist = INF;
        int u = -1;

        for (int j = 1; j <= N; j++) {
            if (!visited[j] && dist[j] < minDist) {
                minDist = dist[j];
                u = j;
            }
        }

        if (u == -1) break;
        visited[u] = 1;

        for (int v = 1; v <= N; v++) {
            if (!visited[v] && graph[u][v] != INF &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    if (dist[destination] == INF)
        printf("-1\n");
    else
        printf("%d\n", dist[destination]);

    return 0;
}


/*
Input:
5 6
1 2 4
1 3 2
2 3 1
2 4 5
3 4 8
4 5 3
1 5

Output:
11
*/