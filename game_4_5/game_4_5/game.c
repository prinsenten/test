#include"game.h"



void InitMine(char board[ROWS][COLS], int rows, int cols, char set)
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
void DispalyBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
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
void Setmine(char board[ROWS][COLS], int row, int col)
{
	
	int count =EASY;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int countnum(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] -8*'0';
}

void Playermove(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY)
	{
		printf("����ߣ�>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//1.����
			if (mine[x][y] == '1')
			{
				printf("ʧ��\n");
				DispalyBoard(mine,row,col);
				break;
			}
			else//2.�����£��ж���Χ�м���
			{
				int count = countnum(mine, x, y);
				show[x][y] = count + '0';//���ֱ���ַ�	
				DispalyBoard(show, row, col);
				win++;
			}

		}
		else
		{
			printf("�ַ��Ƿ�����������\n");
		}
	}
	if (win == row * col - EASY)
	{
		printf("���׳ɹ�\n");
		DispalyBoard(mine, row, col);
	}
}