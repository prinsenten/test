#include"game.h"


void menu()
{
	printf("**************************************\n");
	printf("******    1.play     0.exit     ******\n");
	printf("**************************************\n");
}
void game()
{
	int ret = 0;
	int board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*')
		{
			printf("玩家获胜");
		}
		if (ret == '#')
		{
			printf("电脑获胜");
		}
		if (ret == 'Q')
		{
			printf("平局");
		}
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择是否游戏:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("字符非法，重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}