#include <stdio.h>
struct node
{
	int x; int y; int f; int s;
};

int main() {
    int row, col;
    int i, j, k, tx, ty;
    int map[51][51] = { 0 };
    int book[51][51] = { 0 };
    int next[4][2] = {{1,  0},
                      {0,  1},
                      {-1, 0},
                      {0,  -1}};

    int startx, starty;
    int des_x, des_y;
    int step = 999999;
    struct node que[2501];
    int head, tail;
    int flag;

    printf("Input Map Size (row <space> col): \n");
    scanf("%i %i", &row, &col);

    printf("Input the Map: \n");
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("%i", &map[i][j]);

    printf("Input the coordinate of the Start point: \n");
    scanf("%i %i", &startx, &starty);
    startx --;  //因为输入起始点的坐标是1base的，而C的Arrary是0base的
    starty --;

    printf("Input the coordinate of the Destination point: \n");
    scanf("%i %i", &des_x, &des_y);
    des_x --;   //理由同上起始点
    des_y --;

    head = 0;  tail = 0;
    flag = 0;
    book[startx][starty] = 1;
    que[0].x = startx;
    que[0].y = starty;
    que[0].s = 0;
    que[0].f = 0;
    tail ++;

    while(head < tail) {
//遍历下一步的四个方向
        for (i = 0; i < 4; i++) {
            tx = que[head].x + next[i][0];
            ty = que[head].y + next[i][1];

            if (tx < 0 || tx > row - 1 || ty < 0 || ty > col - 1) {
//                如果超出边界
                continue;
            }

            if (map[tx][ty] == 0 && book[tx][ty] == 0) {
//                如果该点不是障碍物，且之前没走过，则...
                que[tail].x = tx;
                que[tail].y = ty;
                que[tail].s = que[head].s + 1;

                book[tx][ty] = 1;
                tail ++;
            }

            if (tx == des_x && ty == des_y) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            break;

        head ++;

    }

    printf("Minimum step is: %d", que[tail - 1].s);
}
