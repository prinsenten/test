
#include"cheest.h"
#include<time.h>

void menu()
{
	printf("*********************************\n");
	printf("**** 1. ��ʼ��Ϸ  0.�˳���Ϸ  ***\n");
	printf("*********************************\n");
}
void game()
{
	char ret = 0;
	//�������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ʾ����
	ShowBoard(board, ROW, COL);
	while (1)
	{
		//�����
		PlayerBoard(board, ROW, COL);
		//��ʾ����
		ShowBoard(board, ROW, COL);
		ret = Iswin(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		//������
		ComputerBoard(board, ROW, COL);
		//��ʾ����
		ShowBoard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("��һ�ʤ\n");
	}
	else if (ret == '#')
	{
		printf("���Ի�ʤ\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ��");
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
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			exit(0);
			break;
		default:
			printf("���������������\n");
			break;
		}
		system("pause");
	}

	return 0;
}