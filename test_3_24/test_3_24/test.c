#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef"; //�ַ�ָ��ֻ�泣���ַ������ַ���ַ
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NWE","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);// POINT
//	printf("%s\n", *-- * ++cpp + 3);//ER
//	printf("s\n", *cpp[-2] + 3);//ST
//	printf("%s\n", cpp[-1][-1] + 1);//EW
//}

//#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;//ָ����Ԫ��
//	char* right = str + len-1;//���һ��Ԫ�ص�ַ
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256] = { 0 };
////	scanf("%s", arr);//abcdef-->fedcba scanf �м��пո��ܶ�ȡ
//	gets(arr);//gets���Զ�ȡһ��
//	//��������arr
//	reverse(arr);
//	printf("%s\n", arr);//
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);// 2 5
//	//2 22 222 2222 22222
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��     nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{  
//			n++;
//		}
//		//2.����i��ÿһλn�η�֮��   sum
//		tmp = i;
//		while (tmp)
//		{
//			sum+=pow(tmp % 10, n);//��η�
//			tmp /= 10;
//		}
//		//3.�Ƚ�i��sum
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}






//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************  7
// ***********        11
//  *********          9
//   *******
//    *****
//	   ***             3
//	    *              1
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);//������������ ����line�����ϰ벿��
//	//��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line ;i++)
//	{
//		//��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <line-1-i ; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	//���������ˮ
//	total = money;//�ж���Ǯ�Ϳ��������ƿ
//	empty = money;
//	//����������ˮ
//	while (empty >= 2) 
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total= %d\n", total);
//	return 0;
//}




//int main()
//{
//	int a = 9;
//	int b = 9 / 2;
//	printf("%d", b);
//	return 0;
//}


void print(int arr[], int sz)
{
	int i =0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)//�������һ��ż����������һ����������
{
	int left = 0;
	int right = sz - 1;
	while (left<right)
	{
		//������ż��
		while ((left<right)&&arr[left] % 2 == 1)
		{
			left++;
		}
		while ((left<right)&&arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,5,5,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}







