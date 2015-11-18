#include <stdio.h>

int des_x, des_y;

void dfs(int x, int y, int step) {
    int next[4][2] = {{1,  0},
                      {0,  1},
                      {-1, 0},
                      {0,  -1}};
    if (x == des_x && y == des_y) {
        
    }
}

int main(){
    int row = 5, col = 4;
    int i, j;
    int map[50][50] = {{0, 0, 1, 0}, {0, 0, 0, 0}, {0, 0, 1, 0}, {0, 1, 0, 0}, {0, 0, 0, 1}};
    int book[50][50];

    int startx, starty,;

    int tx, ty; // next step variables


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


}