//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<graphics.h>//��Ҫ��װͼ�ο���
//#include<conio.h>
//#include<time.h>
//
//
//IMAGE img[12];
//int imgIndex[12] = { 0,2,4,8,16,32,64,128,256,512,1024,2048 };
//int map[4][4] = { 0 };
//
//void loadResource()
//{
//	for (int i = 0; i < 12; i++)
//	{
//		//��������
//		char fileName[20] = "";
//		sprintf(fileName, "%d.bmp", imgIndex[i]);
//		loadimage(img + i, fileName);
//	}
//}
//
//void drawMap()
//{
//	setbkcolor(RGB(244, 215, 215));//���ñ�����ɫ
//	cleardevice();//ˢ����Ļ
//	settextcolor(WHITE);//����������ɫ
//	settextstyle(35, 0, "����");//��������
//	outtextxy(50, 10, "2048��Ϸ");//��ӡ����
//
//	//���ݶ�ά���黭ͼ
//	int x, y, k;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			x = 60 * j;
//			y = 60 * i + 50;
//			for (k = 0; k < 12; k++)
//			{
//				//�����ǰԪ�ض�Ӧ��ͼƬ���
//				if (imgIndex[k] == map[i][j])
//					break;
//			}
//			//����Ӧ��ŵ�ͼƬ
//			putimage(x, y, img + k);
//		}
//	}
//}
////�������2��4
//int randInNum()
//{
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (map[i][j] == 0)
//			{
//				map[i][j] = (rand() % 3)*2;
//				//����0�Ļ����ôβ���ֵ����
//				if (map[i][j] == 0)
//					continue;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
//int moveRight()
//{
//	int flag = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 4 - 1; j >= 0; j--)
//		{
//			int curkey = map[i][j];//��ǰԪ��ֵ
//			if (curkey != 0)
//			{
//				int k = j - 1;
//				while (k >= 0)
//				{
//					//��ǰԪ����һ��
//					int curkeyNext = map[i][k];
//					if (curkeyNext != 0)
//					{
//						//������ڵ���ͬ����ô�ͺϲ�
//						if (curkey == curkeyNext)
//						{
//							//[2 2 4 4]--->[0 4 0 8]
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//						}
//						k = -1;
//						break;
//					}
//					k--;//�ж�����λ��
//				}
//			}
//		}
//	}
//	//[0 2 0 8]--->[0 0 2 8]
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 4 - 1; j >= 0; j--)
//		{
//			int curkey = map[i][j];
//			if (curkey == 0)
//			{
//				int k = j - 1;
//				while (k >= 0)
//				{
//					int curkeynext = map[i][k];
//					if (curkeynext != 0)
//					{
//						flag = 1;
//						map[i][j] = curkeynext;
//						map[i][k] = 0;
//						k = -1;
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
//int leftMove()
//{
//	int flag = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];//��ǰԪ��ֵ
//			int k = j + 1;
//			while (k < 4)
//			{
//				//��ǰԪ����һ��
//				int curkeyNext = map[i][k];
//				if (curkeyNext != 0)
//				{
//					//������ڵ���ͬ����ô�ͺϲ�
//					if (curkey == curkeyNext)
//					{
//						//[2 2 4 4]--->[4 0 8 0]
//						flag = 1;
//						map[i][j] += map[i][k];
//						map[i][k] = 0;
//					}
//					k = 4;
//					break;
//				}
//				k++;//�ж�����λ��
//			}
//		}
//	}
//	//[0 2 0 8]--->[2 0 8 0]
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j<4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey == 0)
//			{
//				int k = j+1;
//				while (k < 4)
//				{
//					int curkeynext = map[i][k];
//					if (curkeynext != 0)
//					{
//						flag = 1;
//						map[i][j] = curkeynext;
//						map[i][k] = 0;
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
//void keyDown()
//{
//	char key = _getch();//���������û�����
//	switch (key)
//	{
//	case 'W':
//	case'w':
//	case 72://��Ӧ��С���̵���������
//		randInNum();
//		break;
//	case's':
//	case'S':
//	case 80:
//		randInNum();
//		break;
//	case'a':
//	case'A':
//	case 75:
//		randInNum();
//		drawMap();
//		leftMove();
//		break;
//	case'd':
//	case'D':
//	case 77:
//		randInNum();
//		drawMap();
//		moveRight();
//		break;
//	}
//}
//
//int main()
//{
//	//�ó�����ʾͼƬ
//	loadResource();
//	initgraph(60*4,60*4+60);
//	drawMap();
//	while (1)
//	{
//		keyDown();
//		drawMap();
//	}
//	////����ͼƬ����
//	//IMAGE background;
//	////������Դ������ loadimage����
//	//loadimage(&background, "class.jpg",800,400);
//	////��ʾͼƬ putimage��ʾͼƬ
//	//putimage(0, 0,img+2);
//
//	getchar();//��ֹ����
//	closegraph();
//	system("pause");
//	return 0;
//}
