#include <stdio.h>
        {
            parent[v] = u;
            printf("Edge %d:(%d, %d) cost:%d\n", edge, a, b, min);
            mincost += min;
            edge++;
        }

        cost[a][b] = cost[b][a] = 9999;
    }

    printf("Minimum cost= %d\n", mincost);
}






int main() {
    int V;
    printf("No of vertices: ");
    scanf("%d", &V);

    int **cost = (int **)malloc(V * sizeof(int *));
    for (int i = 0; i < V; i++)
        cost[i] = (int *)malloc(V * sizeof(int));

    printf("Adjacency matrix:\n");
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            scanf("%d", &cost[i][j]);

    kruskalMST(cost, V);

    for (int i = 0; i < V; i++)
        free(cost[i]);
    free(cost);

    return 0;
}
