#include "stdio.h"
int book[101] = {0}, e[101][101], dim, branch;



int main() {
    int nodeA, nodeB;
    int i, j, k;
    int que[100001] = {0}, head = 0, tail = 0;
    int cur;

    printf("Please input dimension: ");
    scanf("%i", &dim);
    for (i = 1; i <= dim; ++i) {
        for (j = 1; j <= dim; ++j) {
            if (i == j)
                e[i][j] = 0;
            else
                e[i][j] = 99999999;
        }
    }
    printf("Please input how many branch do you have: ");
    scanf("%i", &branch);

    printf("Please input branch: \n");
    for (k = 1; k <= branch; ++k) {
        scanf("%d %d", &nodeA, &nodeB);
        e[nodeA][nodeB] = 1;
        e[nodeB][nodeA] = 1;
    }

    printf("The matrix you have input is :\n");
    for (i = 1; i <= dim; ++i) {
        for (j = 1; j <= dim; ++j) {
            printf("%10i", e[i][j]);
        }
        putchar('\n');
    }

    head = 1; tail = 1;
    que[tail] = 1;
    tail ++;
    book[1] = 1;

    while (head < tail) {
        cur = que[head];
        for (i = 1; i < dim; i++) {
            if (e[cur][i] == 1 && book[i] == 0) {
                que[tail ++] = i;
                book[i] = 1;
            }
            if (tail > dim)
                break;
        }
        head ++;
    }

    for (i = 1; i < tail; i++) {
        printf("%d", que[i]);
    }
}