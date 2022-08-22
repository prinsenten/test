#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a = 3, b = 3;
//	printf("%d£¨%d",  ++b ,a = a < b);
//	return 0;
//}
//int main()
//{
//	int a = 3, b = 3;
//	printf("%d£¨%d",a = a < b, ++b);
//	return 0;
//}
//int main()
//{
//	int i = 3;
//	printf("%d %d %d", i, i++, ++i);
//	printf("\n%d\n", i);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("%d %d", j += 1+i, i = 10);
//
//}
//int main()
//{
//	int a = 9, b = 2;
//	float x = 6.6, y = 1.1, z;
//	z = a / 2 + b * x / y + 1 / 2;
//	printf("%5.2f\n", z);
//	return 0;
//}

//void main()
//{
//	char c = 0;
//	scanf("%c", &c);
//	if (c <= 'z' && c >= 'a');
//		c = c - 'a' + 'A';
//	if (c <= 'Z' && c >= 'A')
//		c = c - 'A' + 'a';
//	printf("%c", c);
//}
//
//void main()
//{
//	int m;
//	int fac = 2;
//	int time;
//	printf("«Î ‰»Î ˝◊÷£∫");
//	scanf("%d", &m);
//	while (m != 1)
//	{
//		time = 0;
//		while (m % fac == 0)
//		{
//			time++;
//			m /= fac;
//		}
//		if (time != 0)
//		{
//			printf("%d  %d\n", fac,time);
//		}
//		fac++;
//	}
//
//}

//int main()
//{
//	int i = 3;
//	printf("")
//}
//void main()
//{
//	int n = 0;
//	int s = 0;
//	while (s<=5)
//	{
//		s += n * n;
//		n = n + 1;
//	}
//	printf("%d\n", n-2);
//
//}


void Fun(int N)
{
int count = 0;
for (int k = 0; k < 2 * N; k++)
{
	++count;
}
int M = 10;
while (M--)
{
	++count;
}
printf("%d\n", count);
}