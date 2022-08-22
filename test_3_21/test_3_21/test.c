


#include<stdio.h>

//
//void test(int arr[])// 可用  和下面一样 都是取首地址
//{}
//void test(int arr[10])//可用 里面的10 写不写一样 无影响
//{}
//void test(int* arr)//可用 
//{}
//void test2(int *arr2[20])//可用 一维数组传参可用写出数组或指针
//{}
//void test2(int **arr2)//可用
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//}



//void test(int arr[3][5])//可
//{}
//void test(int arr[][5])//行可用省略，列不可省略
//{}


//void test(int *arr)//err 首元素是第一行为一维数组
//{}
//void test(int **arr)//err
//{}
//void test(int (*arr)[5])//可 
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(3, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello world");
//	return 0;
//}


////代码1
//     (*(void(*)())0)();
//     //void(*)()-函数指针类型  把0当作某函数的地址 
//     //把0强制类型转换  ( void(*)()  ）0
//     //(*( void(*)（） ） 0）  （）  解引用调用函数
//     //此代码是一次函数调用
//      
////代码2
//     void(*signal(int, void(*)(int)))(int);
//     //         （函数， 函数指针类型）
//     //void(*                       )(int)---函数指针
//     //signal是一个函数声明
//    //signal函数的参数有两个，第一个是int,第二个是函数指针，
//    //该函数指针指向的函数的参数是int，返回类型是void
// //signal的返回类型也是一个函数指针，该函数指针指向int 返回类型void
//
//     typedef void(*pfun_t)(int);//ok
//     pfun_t signal(int, pfun_t);//这两个合在一起和代码2一样
//
//     typedef void(*)(int) pfun_t;//err 函数指针类型不可这么定义
//     
//     typedef unsigned int uint;//ok



//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (pa)(3, 3));
//	printf("%d\n", Add(3, 3));
//	printf("%d\n", (*pa)(3, 3));
//	printf("%d\n", (**pa)(3, 3));
//	printf("%d\n", (***pa)(3, 3));
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x /y;
//}
//int main()
//{
//	int arr[5];
//	int (*pa)(int, int) = Add;//函数指针
//	int (*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", parr[i](2, 3));
//	}
//	return 0;
//}


//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
////2.写一个函数指针数组 pfArr，能够存放4个my_strcpy的函数地址
//
//int main()
//{
//	char* (*pf)(char*,const char*) = my_strcpy;
//	char* (*pfArr[4])(char*,const char*) = { my_strcpy };
//	
//	return 0;
// }
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));//由pf指向加减乘除运算
//}
//int main()
//{
//	int input = 0;
//	do 
//	{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1://利用回调函数就不用在每个case后面都“输入请输入操作”
//			Calc(Add);   //因为计算器只有最后取得运算不一样前面提示都一样
//			break;
//		case 2:
//			Calc(Sub);
//		}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组地址
//	
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组，函数指针数组
//	int (*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素类型是一个函数指针int(*)(int,int)
//	return 0;
//}



void print(char* str)
{
	printf("hehe:%s", str);
}
void test(void(*p)(char*))
{
	printf("test\n");
	p("bit");//p为回调函数   调用了print函数
}
int main()
{
	test(print);
	return 0;
}