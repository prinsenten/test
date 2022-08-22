///************************************************
//*		stdio.h 标准C语言库
//*		#include 包含库
//*
//************************************************/
//#define _CRT_SECURE_NO_WARNINGS	//去掉编译器内扩增问题
//#include <stdio.h>
//#include <stdlib.h>
//#include <graphics.h>  //报错--->baby 图形库插件安装就可以了
//#include <conio.h>
//#include <time.h>
///************************************************
//*		数据成员
//*		变量的声明
//************************************************/
//IMAGE img[12];		//存储12张照片
////图片的的名字的序号
////imgIndex[x].bmp;
//int imgIndex[12] = { 0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048 };
//int i, j;		//循环变量的遍历
//int  map[4][4] = { 0 };
///************************************************
//*		子函数
//*		加载资源
//************************************************/
//void loadResource()
//{
//	for (i = 0; i < 12; i++)
//	{
//		//批量加载
//		char fileName[20] = "";
//		sprintf(fileName, "%d.bmp", imgIndex[i]);
//		loadimage(img + i, fileName);
//		//0 1 2
//	}
//}
///************************************************
//*		画地图
//*		根据二维数组中的值去画地图
//************************************************/
//void drawMap()
//{
//	setbkcolor(RGB(244, 215, 215));
//	cleardevice();
//	settextcolor(WHITE);	//设置文字颜色
//	settextstyle(35, 0, "楷体");	//设置文字格式
//	outtextxy(50, 10, "2048游戏");
//	//根据二维数组中值去画图
//	int x, y, k;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			x = 60 * j;
//			y = 60 * i + 50;
//			for (k = 0; k < 12; k++)
//			{
//				//求出当前元素对应的图片序号
//				//赋值语句不要写成等于号
//				if (imgIndex[k] == map[i][j])
//					break;
//			}
//			//贴相应序号的图片
//			putimage(x, y, img + k);
//		}
//	}
//}
///************************************************
//*		随机产生2或者4 或者0
//*		随机函数
//************************************************/
//int  randIntNum()
//{
//	srand((unsigned int)time(NULL));	//随机函数种子
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (map[i][j] == 0)
//			{
//				//0,2,4
//				//(0,1,2)*2 
//				map[i][j] = (rand() % 3) * 2;
//				//产生0的话，该次产生的值不算
//				if (map[i][j] == 0)
//					continue;
//				return 0;
//			}
//		}
//	}
//	return 0;
//}
////做移动，一定要想清楚什么时候能动
///************************************************
//*		根据：上，下，左，右 键做不同合并
//*		以右键为例：
//*			[2 2 4 4]--->[0 4 0 8]
//*			[0 2 0 8]--->[0 0 2 8]
//************************************************/
//int moveRight()
//{
//	int flag = 0;		//游戏结束标记
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 4 - 1; j >= 0; j--)
//		{
//			int curKey = map[i][j];	//当前元素的值
//			if (curKey != 0)
//			{
//				int curKey = map[i][j];	//当前元素的值
//				int k = j + 1;
//				while (k >= 0)
//				{
//					//当前元素的下一个
//					int curKeyNext = map[i][k];
//					if (curKeyNext != 0)
//					{
//						//如果相邻的是相同，那么我们就合并
//						if (curKey == curKeyNext)
//						{
//							//[2 2 4 4]--->[0 4 0 8]
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//						}
//						k = 4;	//退出循环
//						break;
//					}
//					k++;	//判断其他的位置
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
//						map[i][j] = curKeyNext; //把非0元素移到0的位置
//						map[i][k] = 0;	//移动后变为0
//						k = -1;
//					}
//					k--;	//其他位置也需要判断
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	else
//		return 4;
//}
////往左走
//int moveLeft()
//{
//	int flag = 0;		//游戏结束标记
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			int curKey = map[i][j];	//当前元素的值
//			if (curKey != 0)
//			{
//				int k = j + 1;
//				while (k < 4)
//				{
//					//当前元素的下一个
//					int curKeyNext = map[i][k];
//					if (curKeyNext != 0)
//					{
//						//如果相邻的是相同，那么我们就合并
//						if (curKey == curKeyNext)
//						{
//							//[2 2 4 4]--->[0 4 0 8]
//							flag = 1;
//							map[i][j] += map[i][k];
//							map[i][k] = 0;
//						}
//						k = 4;	//退出循环
//						break;
//					}
//					k++;	//判断其他的位置
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
//						map[i][j] = curKeyNext; //把非0元素移到0的位置
//						map[i][k] = 0;	//移动后变为0
//						k = 4;
//					}
//					k++;	//其他位置也需要判断
//				}
//			}
//		}
//	}
//	if (flag)
//		return 0;
//	else
//		return 4;
//}
////往上走
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
////往下走
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
//*		按键响应
//*		上，下，左，右
//************************************************/
//void keyDown()
//{
//	char key = _getch();		//用来接收用户按键
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
//		//drawMap();
//		moveRight();
//		break;
//	}
//}
//
///************************************************
//*		主函数
//*		唯一的一个入口函数
//************************************************/
//int main()
//{
//	//程序如何显示图片
//	loadResource();
//	initgraph(60 * 4, 60 * 4 + 60);
//	drawMap();
//	while (1)
//	{
//		keyDown();
//		drawMap();
//	}
//	////1.声明图片变量
//	//IMAGE background;
//	////2.加载资源到变量 loadimage加载
//	//loadimage(&background, "class.jpg", 800, 400);
//	//3.显示图片 putimage显示图片
//	//putimage(0, 0, img+1);
//	getchar();	//防止闪屏
//	closegraph();
//	system("pause");
//	return 0;
//}
///*
//	学不会的原因：
//		1.遇到问题没办法解决。遇到问题，解决问题才是学的东西。
//		（征服感，成就感）。
//		2.迷茫期：不知道学什么，学了不知道干嘛？
//			招聘网：职业的需求。企业需要什么的人,需要什么技能的人。
//
//
//
//*/
