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
			printf("��һ�ʤ");
		}
		if (ret == '#')
		{
			printf("���Ի�ʤ");
		}
		if (ret == 'Q')
		{
			printf("ƽ��");
		}
	
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ���Ƿ���Ϸ:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�ַ��Ƿ�����������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}