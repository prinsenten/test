//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<graphics.h>//需要安装图形库插件
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
//		//批量加载
//		char fileName[20] = "";
//		sprintf(fileName, "%d.bmp", imgIndex[i]);
//		loadimage(img + i, fileName);
//	}
//}
//
//void drawMap()
//{
//	setbkcolor(RGB(244, 215, 215));//设置背景颜色
//	cleardevice();//刷新屏幕
//	settextcolor(WHITE);//设置字体颜色
//	settextstyle(35, 0, "楷体");//设置字体
//	outtextxy(50, 10, "2048游戏");//打印文字
//
//	//根据二维数组画图
//	int x, y, k;
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			x = 60 * j;
//			y = 60 * i + 50;
//			for (k = 0; k < 12; k++)
//			{
//				//求出当前元素对应的图片序号
//				if (imgIndex[k] == map[i][j])
//					break;
//			}
//			//贴相应序号的图片
//			putimage(x, y, img + k);
//		}
//	}
//}
////随机产生2或4
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
//				//产生0的话，该次产生值不算
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
//			int curkey = map[i][j];//当前元素值
//			if (curkey != 0)
//			{
//				int k = j - 1;
//				while (k >= 0)
//				{
//					//当前元素下一个
//					int curkeyNext = map[i][k];
//					if (curkeyNext != 0)
//					{
//						//如果相邻的相同，那么就合并
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
//					k--;//判断其他位置
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
//			int curkey = map[i][j];//当前元素值
//			int k = j + 1;
//			while (k < 4)
//			{
//				//当前元素下一个
//				int curkeyNext = map[i][k];
//				if (curkeyNext != 0)
//				{
//					//如果相邻的相同，那么就合并
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
//				k++;//判断其他位置
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
//	char key = _getch();//用来接收用户按键
//	switch (key)
//	{
//	case 'W':
//	case'w':
//	case 72://对应的小键盘的上下左右
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
//	//用程序显示图片
//	loadResource();
//	initgraph(60*4,60*4+60);
//	drawMap();
//	while (1)
//	{
//		keyDown();
//		drawMap();
//	}
//	////声明图片变量
//	//IMAGE background;
//	////加载资源到变量 loadimage加载
//	//loadimage(&background, "class.jpg",800,400);
//	////显示图片 putimage显示图片
//	//putimage(0, 0,img+2);
//
//	getchar();//防止闪屏
//	closegraph();
//	system("pause");
//	return 0;
//}
