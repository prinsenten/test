
#include<math.h>
#include<stdio.h>
int reverse(int x)
{
	int count = 0;
	int tmp = x;
	int result=0;
	int run = x;
	while (tmp)
	{
		tmp /= 10;
		count++;
	}
	int count2 = count;
	while (run)
	{
		result += (run%10)*pow(10, --count);
		run /= 10;
	}
	int tmp2 = result;
	int result2 = 0;
	while (tmp2)
	{
		result2 += (tmp2 % 10) * pow(10, --count2);
		tmp2 /= 10;
	}
	if (result2 == x)
	{
		return result;
	}
	return 0;
}
//int reverse(int x)
//{
//	int result = 0;
//	int tmp = x;
//	int run = 0;
//	int result2 = 0;
//	while (tmp)
//	{
//		run = tmp % 10;
//		tmp /= 10;
//		result=(result*10)+run;
//	}
//	tmp = result;
//	while (tmp)
//	{
//		run = tmp % 10;
//		tmp /= 10;
//		result2 = (result2 * 10) + run;
//	}
//	if (result2 == x)
//	{
//		return result;
////	}
////	return 0;
////}
//int main()
//{
//	int a = -2147483648;
//	int c=reverse(a);
//	printf("%d", c);
//	return 0;
//}

//int isPowerOfThree(int n) {
//	int count = 0;
//	int run = n;
//	while (n / 3)
//	{
//		n /= 3;
//		count++;
//	}
//	if (run == n * pow(3, count))
//		return 1;
//
//	return 0;
//}
//int main()
//{
//	int x = 6;
//	int ret=isPowerOfThree(x);
//	printf("%d", ret);
//	return 0;
//}
//int main()
//{
//	int x = 2;
//	int y = x * pow(3, 0);
//	printf("%d", y);
//	return 0;
//}