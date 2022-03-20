#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("****      1.play      0.exit    *****\n");
	printf("*************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FineMine(mine,show, ROW, COL);


}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do 
	{
		menu();
		printf("请选择:>");
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
			printf("非法输入，重新输入\n");
			break;
		}
	}while (input);
}
int main()
{
	test();
	return 0;
}