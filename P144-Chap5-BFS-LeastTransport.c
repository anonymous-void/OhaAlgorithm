//
// Created by Tesla on 2015/12/16.
//

#include <stdio.h>
int dim, branch, nodeA, nodeB, a, b;
int e[5][5] = {0}, book[51] = {0};
int i, j;

struct note
{
    int x;  //城市编号
    int s;  //转机次数
};

int main() {
    struct note que[2501];
    int head, tail, cur, flag=0;
    printf("How many nodes? ");
    scanf("%i", &dim);
    printf("How many branches? ");
    scanf("%i", &branch);
    printf("Your departure and arrival? ");
    scanf("%i %i", &nodeA, &nodeB);

    printf("Please input the map.\n");
    for (i = 1; i <= dim; i++) {
        for (j = 1; j <= dim; j++) {
            if (i == j)
                e[i][j] = 0;
            else
                e[i][j] = 99999999;
        }
    }

    for (i = 1; i <= branch; i++) {
        scanf("%i %i", &a, &b);
        e[a][b] = 1;
        e[b][a] = 1;
    }

    head = 1;
    tail = 1;

    que[tail].x = nodeA;
    que[tail].s = 0;
    tail ++;
    book[1] = nodeA;

    while (head < tail) {
        cur = que[head].x;
        for (j = 1; j <= dim; j++) {
            if (e[cur][j] != 99999999 && book[j] == 0) {
                que[tail].x = j;
                que[tail].s = que[head].s + 1;
                tail ++;
                book[j] = 1;
            }

            if (que[tail].x == nodeB) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            break;

        head ++;
    }

    printf("The least transportation is : %i", que[tail - 1].s);

    return 0;
}