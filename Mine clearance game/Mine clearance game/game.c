#include"game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
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
	int count = EASY;

	while (count)
	{
		
		int x = rand() % row + 1;
		int y = rand() % col+ 1;
		if (board[x][y]=='0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}
int get_my_count(char mine[ROWS][COLS],int x,int y)
{
	return mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] - 8 * '0';
}
void FineMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while(win<row*col-EASY)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		int ret = 0;
		
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if(mine[x][y]=='1')
			{
				printf("失败\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int ret = get_my_count(mine,x,y);
				show[x][y] = ret + '0';
				win++;
				DisplayBoard(show, ROW, COL);
			}
			
		}
		else
		{
			printf("坐标非法，重新输入\n");
		}
		
	}
	if (win == row * col - EASY)
	{
		printf("成功\n");
		DisplayBoard(mine, row, col);
	}
}




