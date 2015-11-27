#include "stdio.h"
int n, m, p, q, min = 999999;
int a[51][51];
int book[51][51];
void dfs(int x, int y, int step) {
    int next[4][2] = { {0, 1},
                        {1, 0},
                        {0, -1},
                        {-1, 0}  };
    int tx, ty, k;
    if(x==p && y==q){
        if(step < min)
            min = step;
        return; //!!!!!!!!!!!!
    }

    for(k=0; k<=3; k++) {
        tx = x + next[k][0];
        ty = y + next[k][1];
        //?????????
        if(tx<1 || tx>n || ty<1 || ty>m)
            continue;
        //???????????????????????????
        if(a[tx][ty] == 0 && book[tx][ty] == 0){
            book[tx][ty] = 1;
            dfs(tx, ty, step+1);
            book[tx][ty] = 0;
        }
    }
    return ;
}

int main()
{
    int i, j, startx, starty;

    printf("请输入地图尺寸：");
    scanf("%d %d", &n, &m);

    printf("您输入的地图是这个：\n");
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            scanf("%d", &a[i][j]);

    printf("请输入起始点：");
    scanf("%d %d %d %d", &startx, &starty, &p, &q);

    book[startx][starty] = 1;
    dfs(startx, starty, 0);

    printf("最小步数：%d", min);

}
