#include<stdio.h>
#include"game.h"
void menu()
{
	printf("*****************************************\n");
	printf("********   1.add        2.del     *******\n");
	printf("********   3.search     4.modify  *******\n");
	printf("********   5.show       6.sort    *******\n");
	printf("********          0.exit          *******\n");
	printf("*****************************************\n");
}
void test()
{
	int input = 0;
	struct Contact con;

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case EXIT:
			printf("�˳�\n");
			break;
		case ADD:
			ADD(&)
			break;
		case DEL:
			break;
		case SEARCH:
			break;
		case MODIFY:
			break;
		case SHOW:
			break;
		case SORT:
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
