///************************************************
//*		stdio.h ��׼C���Կ�
//*		#include ������
//*
//************************************************/
//#define _CRT_SECURE_NO_WARNINGS	//ȥ������������������
//#include <stdio.h>
//#include <stdlib.h>
//#include <graphics.h>  //����--->baby ͼ�ο�����װ�Ϳ�����
//#include <conio.h>
//#include <time.h>
///************************************************
//*		���ݳ�Ա
//*		����������
//************************************************/
//IMAGE img[12];		//�洢12����Ƭ
////ͼƬ�ĵ����ֵ����
////imgIndex[x].bmp;
//int imgIndex[12] = { 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048 };
//int i, j;		//ѭ�������ı���
//int  map[4][4] = { 0 };
///************************************************
//*		�Ӻ���
//*		������Դ
//************************************************/
//void loadResource()
//{
//	for (i = 0; i < 12; i++)
//	{
//		//��������
//		char fileName[20] = "";
//		sprintf(fileName, "%d.bmp", imgIndex[i]);
//		loadimage(img + i, fileName);
//		//0 1 2
//	}
//}
///************************************************
//*		����ͼ
//*		���ݶ�ά�����е�ֵȥ����ͼ
//************************************************/
//void drawMap()
//{
//	setbkcolor(RGB(244, 215, 215));
//	cleardevice();
//	settextcolor(WHITE);	//����������ɫ
//	settextstyle(35, 0, "����");	//�������ָ�ʽ
//	outtextxy(50, 10, "2048��Ϸ");
//	//���ݶ�ά������ֵȥ��ͼ
//	int x, y, k;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			x = 60 * j;
//			y = 60 * i + 50;
//			for (k = 0; k < 12; k++)
//			{
//				//�����ǰԪ�ض�Ӧ��ͼƬ���
//				//��ֵ��䲻Ҫд�ɵ��ں�
//				if (imgIndex[k] == map[i][j])
//					break;
//			}
//			//����Ӧ��ŵ�ͼƬ
//			putimage(x, y, img + k);
//		}
//	}
//}
///************************************************
//*		�������2����4 ����0
//*		�������
//************************************************/
//int  randIntNum()
//{
//	srand((unsigned int)time(NULL));	//�����������
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (map[i][j] == 0)
//			{
//				//0,2,4
//				//(0,1,2)*2 
//				map[i][j] = (rand() % 3) * 2;
//				//����0�Ļ����ôβ�����ֵ����
//				if (map[i][j] == 0)
//					continue;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
////���ƶ���һ��Ҫ�����ʲôʱ���ܶ�
///************************************************
//*		���ݣ��ϣ��£����� ������ͬ�ϲ�
//*		���Ҽ�Ϊ����
//*			[2 2 4 4]--->[0 4 0 8]
//*			[0 2 0 8]--->[0 0 2 8]
//************************************************/
//int moveRight()
//{
//	int flag = 0;		//��Ϸ�������
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 4 - 1; j >= 0; j--)
//		{
//			int curKey = map[i][j];	//��ǰԪ�ص�ֵ
//			if (curKey != 0)
//			{
//				int curKey = map[i][j];	//��ǰԪ�ص�ֵ
//				int k = j + 1;
//				while (k >= 0)
//				{
//					//��ǰԪ�ص���һ��
//					int curKeyNext = map[i][k];
//					if (curKeyNext != 0)
//					{
//						//������ڵ�����ͬ����ô���Ǿͺϲ�
//						if (curKey == curKeyNext)
//						{
//							//[2 2 4 4]--->[0 4 0 8]
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//						}
//						k = 4;	//�˳�ѭ��
//						break;
//					}
//					k++;	//�ж�������λ��
//				}
//			}
//
//		}
//	}
//	//[0 2 0 8]--->[0 0 2 8]
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 4 - 1; j >= 0; j--)
//		{
//			int curKey = map[i][j];
//			if (curKey == 0)
//			{
//				int k = j - 1;
//				while (k >= 0)
//				{
//					int curKeyNext = map[i][k];
//					if (curKeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curKeyNext; //�ѷ�0Ԫ���Ƶ�0��λ��
//						map[i][k] = 0;	//�ƶ����Ϊ0
//						k = -1;
//					}
//					k--;	//����λ��Ҳ��Ҫ�ж�
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	else
//		return 4;
//}
////������
//int moveLeft()
//{
//	int flag = 0;		//��Ϸ�������
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];	//��ǰԪ�ص�ֵ
//			if (curKey != 0)
//			{
//				int k = j + 1;
//				while (k < 4)
//				{
//					//��ǰԪ�ص���һ��
//					int curKeyNext = map[i][k];
//					if (curKeyNext != 0)
//					{
//						//������ڵ�����ͬ����ô���Ǿͺϲ�
//						if (curKey == curKeyNext)
//						{
//							//[2 2 4 4]--->[0 4 0 8]
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//						}
//						k = 4;	//�˳�ѭ��
//						break;
//					}
//					k++;	//�ж�������λ��
//				}
//			}
//		}
//	}
//	//[0 2 0 8]--->[0 0 2 8]
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];
//			if (curKey == 0)
//			{
//				int k = j + 1;
//				while (k < 4)
//				{
//					int curKeyNext = map[i][k];
//					if (curKeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curKeyNext; //�ѷ�0Ԫ���Ƶ�0��λ��
//						map[i][k] = 0;	//�ƶ����Ϊ0
//						k = 4;
//					}
//					k++;	//����λ��Ҳ��Ҫ�ж�
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	else
//		return 4;
//}
////������
//int  moveUp()
//{
//	int flag = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];
//			if (curKey != 0)
//			{
//				int k = i + 1;
//				while (k < 4)
//				{
//					int curKeyNext = map[k][j];
//					if (curKeyNext != 0)
//					{
//						if (curKey == curKeyNext)
//						{
//							flag = 1;
//							map[i][j] += map[k][j];
//							map[k][j] = 0;
//						}
//						k = 4;
//						break;
//					}
//					k++;
//				}
//			}
//		}
//	}
//	for (i = 0; i < 4 - 1; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];
//			if (curKey == 0)
//			{
//				int k = i + 1;
//				while (k < 4)
//				{
//					int curKeyNext = map[k][j];
//					if (curKeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curKeyNext;
//						map[k][j] = 0;
//						k = 4;
//					}
//					k++;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	else
//		return 4;
//}
////������
//int  moveDown()
//{
//	int flag = 0;
//	for (i = 4 - 1; i >= 0; i--)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];
//			if (curKey != 0)
//			{
//				int k = i - 1;
//				while (k >= 0)
//				{
//					int curKeyNext = map[k][j];
//					if (curKeyNext != 0)
//					{
//						if (map[i][j] == map[k][j])
//						{
//							flag = 1;
//							map[i][j] += map[k][j];
//							map[k][j] = 0;
//						}
//						k = 0;
//						break;
//					}
//					k--;
//				}
//			}
//		}
//	}
//	for (i = 4 - 1; i > 0; i--)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];
//			if (curKey == 0)
//			{
//				int k = i - 1;
//				while (k >= 0)
//				{
//					int curKeyNext = map[k][j];
//					if (curKeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curKeyNext;
//						map[k][j] = 0;
//						k = 0;
//					}
//					k--;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	else
//		return 4;
//}
//
///************************************************
//*		������Ӧ
//*		�ϣ��£�����
//************************************************/
//void keyDown()
//{
//	char key = _getch();		//���������û�����
//	switch (key)
//	{
//	case 'w':
//	case 'W':
//	case 72:	//С����
//		randIntNum();
//		moveUp();
//		break;
//	case 'S':
//	case 's':
//	case 80:
//		randIntNum();
//		moveDown();
//		break;
//	case 'a':
//	case 'A':
//	case 75:
//		randIntNum();
//		moveLeft();
//		break;
//	case 'd':
//	case 'D':
//	case 77:
//		randIntNum();
//		//drawMap();
//		moveRight();
//		break;
//	}
//}
//
///************************************************
//*		������
//*		Ψһ��һ����ں���
//************************************************/
//int main()
//{
//	//���������ʾͼƬ
//	loadResource();
//	initgraph(60 * 4, 60 * 4 + 60);
//	drawMap();
//	while (1)
//	{
//		keyDown();
//		drawMap();
//	}
//	////1.����ͼƬ����
//	//IMAGE background;
//	////2.������Դ������ loadimage����
//	//loadimage(&background, "class.jpg", 800, 400);
//	//3.��ʾͼƬ putimage��ʾͼƬ
//	//putimage(0, 0, img+1);
//	getchar();	//��ֹ����
//	closegraph();
//	system("pause");
//	return 0;
//}
///*
//	ѧ�����ԭ��
//		1.��������û�취������������⣬����������ѧ�Ķ�����
//		�������У��ɾ͸У���
//		2.��ã�ڣ���֪��ѧʲô��ѧ�˲�֪�����
//			��Ƹ����ְҵ��������ҵ��Ҫʲô����,��Ҫʲô���ܵ��ˡ�
//
//
//
//*/
