#include<bits/stdc++.h>
#define m 100
#define n 6
#define e 6
int visited[m];
typedef struct
{
    int vertex[m];
    int edge[m][m];
} gadjmatrix;
void createadjmatrix(gadjmatrix &g)
{
    int i, j, k;
    for (i = 0; i < n; i++)
        g.vertex[i] = i;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            g.edge[i][j] = 0;
    for (k = 0; k < e; k++)
    {
        scanf("%d %d", &i, &j);
        g.edge[i][j] = g.edge[j][i] = 1;
    }
}
void bfs(gadjmatrix g, int v0)
{
    struct
    {
        int front;
        int rear;
        int q[m];
    } queue;
    int i, j;
    printf("%d\t", v0);
    visited[v0] = 1;
    queue.front = queue.rear = 0;
    queue.rear = (queue.rear + 1) % m;
    queue.q[queue.rear] = v0;
    while (queue.front != queue.rear)
    {
        queue.front = (queue.front + 1) % m;
        i = queue.q[queue.front];
        for (j = 0; j < n; j++)
            if (g.edge[i][j] == 1 && visited[j] == 0)
            {
                printf("%d\t", j);
                visited[j] = 1;
                queue.rear = (queue.rear + 1) % m;
                queue.q[queue.rear] = j;
            }
    }
}
main()
{
    gadjmatrix g;
    createadjmatrix(g);
    bfs(g, 0);
    system("pause");
}