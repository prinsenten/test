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
	//1.�׵���Ϣ�洢
	char mine[ROWS][COLS] = {0};
	//2.�Ų���
	char show[ROWS][COLS] = { 0 };
	//3.��ʼ������
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����Ƿ�����������");
			break;
		}

	} while (input);
}
int main()
{
	test();
	return 0;
}