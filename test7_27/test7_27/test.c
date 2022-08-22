
#include"cheest.h"
#include<time.h>

void menu()
{
	printf("*********************************\n");
	printf("**** 1. 开始游戏  0.退出游戏  ***\n");
	printf("*********************************\n");
}
void game()
{
	char ret = 0;
	//存放棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//显示棋盘
	ShowBoard(board, ROW, COL);
	while (1)
	{
		//玩家走
		PlayerBoard(board, ROW, COL);
		//显示棋盘
		ShowBoard(board, ROW, COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑走
		ComputerBoard(board, ROW, COL);
		//显示棋盘
		ShowBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家获胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑获胜\n");
	}
	else if (ret == 'Q')
	{
		printf("平局");
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu();
		int select = 0;
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			printf("开始游戏\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			exit(0);
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
		system("pause");
	}

	return 0;
}