#include <stdio.h>

int des_x, des_y, min = 999999;
int row = 5, col = 4;
int next[4][2] = {{1,  0},
                  {0,  1},
                  {-1, 0},
                  {0,  -1}};
int map[50][50] = {{0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}, {0, 1, 0, 0}, {0, 0, 0, 1}};
int book[50][50];

void dfs(int x, int y, int step) {
    int k, tx, ty;

    if (x == des_x && y == des_y) {
        if (step < min) {
            min = step;
        }
        return;
    }

    for (k = 0; k < row; ++k) {
        tx = x + next[k][0];
        ty = y + next[k][1];

        if (tx < 0 || tx > row - 1 || ty < 0 || ty > col - 1)
            continue;

        if (map[tx][ty] == 0 && book[tx][ty] == 0) {
            book[tx][ty] = 1;
            dfs(tx, ty, step+1);
            book[tx][ty] = 0;
        }
    }
    return;
}

int main(){

    int i, j, k;
    int startx, starty;

//    printf("Input Map Size (row <space> col): \n");
//    scanf("%i %i", &row, &col);

//    printf("Input the Map: \n");
//    for (i = 0; i < row; i++)
//        for (j = 0; j < col; j++)
//            scanf("%i", &map[i][j]);

    printf("Input the coordinate of the Start point: \n");
    scanf("%i %i", &startx, &starty);
    startx --;  //因为输入起始点的坐标是1base的，而C的Arrary是0base的
    starty --;

    printf("Input the coordinate of the Destination point: \n");
    scanf("%i %i", &des_x, &des_y);
    des_x --;   //理由同上起始点
    des_y --;

    book[startx][starty] = 1;
    dfs(startx, starty, 0);
    printf("%d", min);
    return 0;

}