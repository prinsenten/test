//#define _CRT_SECURE_NO_WARNINGS	//去掉编译器内扩增问题
//#include <stdio.h>
//#include <stdlib.h>
//#include <graphics.h>  //报错--->baby 图形库插件安装就可以了
//#include <conio.h>//按键交互
//#include <time.h>
//
//IMAGE img[12];		//存储12张照片
////图片的的名字的序号
////imgIndex[x].bmp;
//int imgIndex[12] = { 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048 };
//int  map[4][4] = { 0 };
//
//void loadResource()
//{
//	for (int i = 0; i < 12; i++)
//	{
//		char fileName[20] = "";
//		sprintf(fileName, "%d.bmp", imgIndex[i]);
//		loadimage(img + i, fileName);
//	}
//}
//void drawMap()
//{
//	setbkcolor(RGB(244, 215, 215));
//	cleardevice();
//	settextcolor(WHITE);
//	settextstyle(35, 0, "楷体");
//	outtextxy(50, 10, "2048游戏");
//	int x, y, k;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4;j++)
//		{
//			x = 60 * j;
//			y = 60 * i + 60;
//			for (k = 0; k < 12; k++)
//			{
//				if (imgIndex[k] == map[i][j])
//					break;
//			}
//			putimage(x, y, img + k);
//		}
//	}
//}
//
////随机生成 2 4
//int randIntNum()
//{
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (map[i][j] == 0)
//			{
//				map[i][j] = (rand() % 3) * 2;
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
//		for (int j = 4-1; j>=0; j--)
//		{
//			int curkey = map[i][j];
//			if (curkey != 0)
//			{
//				int curkey = map[i][j];
//				int k = j - 1;
//				while (k >=0)
//				{
//					int curkeyNext = map[i][k];
//					if (curkeyNext != 0)
//					{
//						if (curkeyNext == curkey)
//						{
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//						}
//						break;
//					}
//					k--;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 4-1; j>=0; j--)
//		{
//			int curkey = map[i][j];
//			if (curkey == 0)
//			{
//				int k = j - 1;
//				while (k>=0)
//				{
//					int curkeyNext = map[i][k];
//					if (curkeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curkeyNext;
//						map[i][k] = 0;
//						break;
//					}
//					k--;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	return 4;
//}
//int moveLeft()
//{
//	int flag = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey != 0)
//			{
//				int k = j + 1;
//				while (k < 4)
//				{
//					int curkeyNext = map[i][k];
//					if (curkeyNext != 0)
//					{
//						if (curkeyNext == curkey)
//						{
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//							break;
//						}
//					}
//					k++;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey == 0)
//			{
//				int k = j + 1;
//				while (k < 4)
//				{
//					int curkeyNext = map[i][k];
//					if (curkeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curkeyNext;
//						map[i][k] = 0;
//						break;
//					}
//					k++;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	return 4;
//}
//int moveUp()
//{
//	int flag = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey != 0)
//			{
//				int k = i + 1;
//				while (k < 4)
//				{
//					int curkeyNext = map[k][j];
//					if (curkeyNext != 0)
//					{
//						if (curkeyNext == curkey)
//						{
//							flag = 1;
//							map[i][j] += map[k][j];
//							map[k][j] = 0;
//							break;
//						}
//					}
//					k++;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey == 0)
//			{
//				int k = i + 1;
//				while (k < 4)
//				{
//					int curkeyNext = map[k][j];
//					if (curkeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curkeyNext;
//						map[k][j] = 0;
//						break;
//					}
//					k++;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	return 4;
//}
//int moveDown()
//{
//	int flag = 0;
//	for (int i = 4-1; i >=0 ; i--)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey != 0)
//			{
//				int k = i - 1;
//				while (k >= 0)
//				{
//					int curkeyNext = map[k][j];
//					if (curkeyNext != 0)
//					{
//						if (curkeyNext == curkey)
//						{
//							flag = 1;
//							map[i][j] += map[k][j];
//							map[k][j] = 0;
//							break;
//						}
//						
//					}
//					k--;
//				}
//			}
//		}
//	}
//	for (int i = 4-1; i >=0; i--)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			int curkey = map[i][j];
//			if (curkey == 0)
//			{
//				int k = i - 1;
//				while (k>=0)
//				{
//					int curkeyNext = map[k][j];
//					if (curkeyNext != 0)
//					{
//						flag = 1;
//						map[i][j] = curkeyNext;
//						map[k][j] = 0;
//						break;
//					}
//					k--;
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	return 4;
//}
//void keyDown()
//{
//	char key = _getch();
//	switch (key)
//	{
//	case 'w':
//	case 'W':
//	case 72:	//小键盘
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
//		moveRight();
//		break;
//	}
//}
//int  isWin()
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			if (map[i][j] == 2048)
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	loadResource();
//	initgraph(60*4, 60*4+60);
//	drawMap();
//	int ret=0;
//	while (1)
//	{
//		keyDown();
//		drawMap();
//		ret=isWin();
//		if (ret)
//		{
//			break;
//		}
//	}
//	IMAGE background;
//	loadimage(&background, "class.jpg", 60 * 4, 60 * 4 + 60);
//	putimage(0, 0, &background);
//	getchar();
//	closegraph();
//	system("pause");
//	return 0;
//}