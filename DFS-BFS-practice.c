#include <stdio.h>
struct node
{
	int x
};
int main() {
	int row, col;
	int map[51][51] = { 0 };
	int book[51][51] = { 0 };
	printf("�������ͼ�ߴ�: \n");
	scanf("%i %i", &row, &col);

	printf("�������ͼ: \n");
	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			scanf("%i", &map[i][j]);


}