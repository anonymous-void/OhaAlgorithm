#include <stdio.h>
int book[101]={0}, sum, dim, branch, e[101][101];

void dfs(int cur) {
    int i;
    printf("%d ", cur);
    sum ++;
    if (sum == dim)
        return;
    for (i = 1; i <= dim; ++i) {
            if (e[cur][i] == 1 && book[i] == 0) {
                book[i] = 1;
                dfs(i);
            }
    }
    return;

}
int main() {
    int i, j, a, b;
    printf("Please input map dimension: ");
    scanf("%d %d", &dim, &branch);
    for (i = 1; i <= dim; ++i) {
        for (j = 1; j <= dim; ++j) {
            if (i == j)
                e[dim][dim] = 0; // Initialization of the map
            else
                e[dim][dim] = 99999999;
        }
    }

    printf("Please input connected branches: ");
    for (i = 1; i <= branch; ++i) {
        scanf("%d %d", &a, &b);
        e[a][b] = 1;
        e[b][a] = 1;
    }

    book[1] = 1;
    dfs(1);
    getchar(); getchar();
    return 0;
}