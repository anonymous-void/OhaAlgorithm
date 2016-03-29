//
// Created by Tesla on 2015/12/13.
//


#include "stdio.h"
int e[101][101] = {0}, min = 99999999, book[101], dim, dest = 5, inf = 99999999;

void dfs(int cur, int dis) {
    int j;
    if (dis > min) return;
    if (cur == dest) {
        if (dis < min) min = dis;
        return;
    }
    for (j = 1; j <= dim; j++) {
        if (e[cur][j] != inf && book[j] == 0) {
            book[j] = 1;
            dfs(j, dis + e[cur][j]);
            book[j] = 0;
        }
    }
    return;
}

int main() {
    int path, i, j;
    int nodeA, nodeB, Dist;
    printf("Number of nodes: ");
    scanf("%i", &dim);
    printf("Number of path: ");
    scanf("%i", &path);

    for (i = 1; i <= dim; i++) {
        for (j = 1; j <= dim; j++) {
            if (i == j)
                e[i][j] = 0;
            else
                e[i][j] = inf;
        }
    }

    printf("Input path and distance: \n");
    for (i = 1; i <= path; i++) {
        scanf("%i %i %i", &nodeA, &nodeB, &Dist);
        e[nodeA][nodeB] = Dist;
    }

    printf("The matrix you have input is :\n");
    for (i = 1; i <= dim; ++i) {
        for (j = 1; j <= dim; ++j) {
            printf("%10i", e[i][j]);
        }
        putchar('\n');
    }

    book[1] = 1;
    dfs(1, 0);
    printf("%d", min);
}