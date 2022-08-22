#include"game.h"
#include<time.h>
void menu()
{
	printf("******************************************\n");
	printf("*****     1.play          0.exit      ****\n");
	printf("******************************************\n");
}
void game()
{
	//1.雷的信息存储
	char mine[ROWS][COLS] = {0};
	//2.排查雷
	char show[ROWS][COLS] = { 0 };
	//3.初始化棋盘
	InitMine(mine, ROWS, COLS,'0');
	InitMine(show, ROWS, COLS,'*');
	DispalyBoard(mine, ROW, COL);
	DispalyBoard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	//DispalyBoard(mine, ROW, COL);
    Playermove(mine,show, ROW, COL);

}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输出非法，重新输入");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}