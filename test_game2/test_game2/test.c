#define _CRT_SECURE_NO_WARNINGS

#include"game.h"
void menu()
{
	printf("*******************************************\n");
	printf("*****     1.play         0.exit       *****\n");
	printf("*******************************************\n");
}
void game()
{
	//1.布置好的雷的信息
	char mine[ROWS][COLS] = {0};
	//2.排查出的雷的信息
	char show[ROWS][COLS] = { 0 };
	//3.初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//打印棋盘
	DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//扫雷
	FindMine(mine,show,ROW,COL);//把mine中的放到show里面
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("请选择是否玩游戏:>");
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
			printf("输入非法，重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}