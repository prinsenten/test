#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*һ���ݹ麯��DigitSum(n), ����һ���Ǹ����������������������֮��

���磺����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

���� 1729�������19*/
//int DigitSum(int a)
//{
//	if (a > 9)
//	{
//		return DigitSum(a / 10) + a % 10;
//	}
//	else
//		return  a ;
//}
//int main()
//{
//	unsigned int input = 0;
//	scanf("%d", &input);
//	int ret = DigitSum(input);
//	printf("%d", ret);
//	return 0;
//}
//
//13.�ݹ�ʵ��n��K�η�
//
//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//double pow(int x, int y)
//{
//	if (y > 0)
//	{
//		return pow(x, y - 1) * x;
//	}
//	else if (y<0)
//	{
//		return 1.0 / pow(x, -y);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int a = 0;
//	int k = 0;
//	scanf("%d%d", &a,&k);
//	double b=pow(a,k);
//	printf("%d^%d=%lf", a, k, b);
//	return 0;
//}



//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p %d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//}
//int main()
//{
//	char a[256] = { 0 };
//	//scanf("%d", a);
//	gets(a);
//	reverse(a);
//	printf("%s\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a, &n);
//	int sum=0;
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//��ӡ�������� ���0~100000֮�����еġ��������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
// �磺
//153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3, ��1 53��һ����ˮ�ɻ�������

#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.�㼸λ��
//		int n = 1;
//		int tmp = i;
//		while (tmp/= 10)
//		{
//			n++;
//		}
//		//2.��n��Ĵη���
//		int sum = 0;
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//struct Test
//{
//	int num;
//	char* pc;
//	short sD;
//	char ch[2];
//	short S[4];
//}*p;
//int main()
//{
//	p = (struct Test*)0x1000000;
//	printf("%p\n", p + 0x1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i <line-1;i++)
//	{
//		int j = 0;
//		//��ӡ�ո�
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j <2*(line-i-1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//����ˮ���� һƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ
//��20Ԫ�����Ժȶ�����ˮ�����ʵ��)
//
//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);
//	total = money;
//	empty = money;
//	while (empty > 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d",total);
//	return 0;
//}
//
//��������˳��������������ǰ�벿�֣�ż���ں�벿��
//void print(int arr[], int sz)
//{
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}
//void move(int arr[], int sz)//�������һ��ż����������һ����������
//{
//    int left = 0;
//    int right = sz - 1;
//    while (left < right)
//    {
//        //������ż��
//        while ((left < right) && arr[left] % 2 == 1)
//        {
//            left++;
//        }
//        while ((left < right) && arr[right] % 2 == 0)
//        {
//            right--;
//        }
//        if (left < right)
//        {
//            int tmp = arr[left];
//            arr[left] = arr[right];
//            arr[right] = tmp;
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    move(arr, sz);
//    print(arr, sz);
//    return 0;
//}

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz- 1;
//	while (left < right)
//	{
//		while ((left < right) && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//	        arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//
//�����Ρ�5λ�˶�Ա�μ�10����ˮ����������������Ԥ����
//A˵��B�ڶ������ҵ���
//B˵���ҵڶ���E����
//C˵���ҵ�һ��D�ڶ�
//D˵��C����ҵ���
//E˵���ҵ��ģ�A��һ
////����������ÿλѡ�ֶ������һ�룬����ȷ������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 2) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(c == 5) + (d == 3) == 1 &&
//							(e == 4) + (a == 1) == 1)
//							if (a * b * c * d * e == 120)
//								printf("%d %d %d %d %d", a, b, c, d, e);
//							//A˵��B�ڶ������ҵ���
//		//B˵���ҵڶ���E����
//		//C˵���ҵ�һ��D�ڶ�
//		//D˵��C����ҵ���
//		//E˵���ҵ��ģ�A��һ
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//
//ʵ��һ���������������ַ����е�k���ַ�
//
//���磺ABCD����һ���ַ����õ�BCDA
//
//ABCD���������ַ����õ�CDAB
void Move(int arr[],int x)
{
	int left = 0;
	int right = strlen(arr) - 1;
	while (x -= 1)
	{
		
	}

}
int main()
{
	int arr[10] = { 0 };
	int n = 0;
	scanf("%s%d", arr, n);
	Move(arr,n);
	printf("%s", arr);
	return 0;
}