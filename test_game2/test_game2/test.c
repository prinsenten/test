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
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS] = {0};
	//2.�Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };
	//3.��ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show,ROWS,COLS,'*');
	//��ӡ����
	DisplayBoard(mine,ROW,COL);
	//DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//ɨ��
	FindMine(mine,show,ROW,COL);//��mine�еķŵ�show����
}
void test()
{
	int input = 0;
	srand((unsigned)time(NULL));

	do
	{
		menu();
		printf("��ѡ���Ƿ�����Ϸ:>");
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
			printf("����Ƿ�����������\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}