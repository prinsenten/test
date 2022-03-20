

#include"game.h"



void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;//����ֱ�Ӹ���Ҫ���ݵ�Ϊ0����*���
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;//1-9 ģ9����1-8 ��1��Ϊ1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//'1'-'0'=1
//'3'-'0'=3
//'0'-'0'=0

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y] +
		mine[x+1][y-1]+
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	//9*9-10=77
	while(win<row*col-EASY_COUNT)
	{
	printf("�����������Ų飺>");
	scanf("%d%d", &x, &y);
	if (x >= 1 && x <= row && y >= 1 && y <= col)
	{
			//����Ϸ�
		//1.����
		if (mine[x][y] == '1')
		{
			printf("ʧ��\n");
			DisplayBoard(mine, row, col);
			break;
		}
		else
		{
			int count=get_mine_count(mine, x, y);
			//����xy������Χ�м�����
			show[x][y] = count + '0';//���ֱ���ַ�
			DisplayBoard(show, row, col);
			win++;
		}
	}
	else
	{
		printf("����Ƿ�����������");
	}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ�\n");
		DisplayBoard(mine, row, col);
	}
}

