#include "stdio.h"

int map[50][50] = {
        {1, 2, 1, 0, 0, 0, 0, 0, 2, 3},
        {3, 0, 2, 0, 1, 2, 1, 0, 1, 2},
        {4, 0, 1, 0, 1, 2, 3, 2, 0, 1},
        {3, 2, 0, 0, 0, 1, 2, 4, 0, 0},
        {0, 0, 0, 0, 0, 0, 1, 5, 3, 0},
        {0, 1, 2, 1, 0, 1, 5, 4, 3, 0},
        {0, 1, 2, 3, 1, 3, 6, 2, 1, 0},
        {0, 0, 3, 4, 8, 9, 7, 5, 0, 0},
        {0, 0, 0, 3, 7, 8, 6, 0, 1, 2},
        {0, 0, 0, 0, 0, 0, 0, 0, 1, 0}
};
int book[50][50], row = 10, col = 10, sum;

void dfs (int x, int y, int color)
{
    int next[4][2] = {
            {0, 1},
            {1, 0},
            {0, -1},
            {-1, 0}
    };
    int k, tx, ty;
    map[x][y] = color;

    for (k = 0; k < 4; ++k) {
        tx = x + next[k][0];
        ty = y + next[k][1];

        if (tx < 0 || tx > row - 1 || ty < 0 || ty > col - 1)
            continue;

        if (map[tx][ty] > 0 && book[tx][ty] == 0) {
            book[tx][ty] = 1;
            sum ++;
            dfs(tx, ty, color);
            /*
             * 强烈注意！！！这里是没有book[tx][ty] = 0;这句代码的，因为与之前的搜索算法不同。路径搜索算法的目的是找出一个从给定
             * 起始点到给定终点的最短路径，路径只有1条或有限的几条，因此每次对上下左右探索后，需要将book还原为0.
             * 而在计算有多少个小岛时，用的算法是color fill。所以只要所能走到的地方，都要填充色彩。book要是还清零，那填充出来的就
             * 不是整个岛屿了，而是最短路径了。况且，本程序也没有起始坐标和终点坐标，而是遍历整个map的。
             * */
        }
    }
    return;
}

int main() {
    int i, j, color_num = 0;
    for ( i = 0; i < row; ++i) {
        for ( j = 0; j < col; ++j) {
            if (map[i][j] > 0) {
                color_num --;
                book[i][j] = 1;
                dfs(i, j, color_num);
            }
        }
    }

    for ( i = 0; i < row; ++i) {
        for ( j = 0; j < col; ++j) {
            printf("%3d", map[i][j]);
        }
        printf("\n");
    }
    getchar();getchar();
    return 0;
}