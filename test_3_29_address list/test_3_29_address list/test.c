#include"contact.h"



void menu()
{

	printf("*****************************************\n");
	printf("********   1.add        2.del     *******\n");
	printf("********   3.search     4.modify  *******\n");
	printf("********   5.show       6.sort    *******\n");
	printf("********          0.exit          *******\n");
	printf("*****************************************\n");


}
int main()
{
	int input = 0;
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼��������� 1000��Ԫ�ظ�����size
	//��ʼ��ͨѶ¼
	InitContact(&con);

	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModidfyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);//��ַЧ�ʸ���
			break;
		case SORT:
			break;
		case 0:
			printf("�˳�");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}