#include<stdio.h>
#include<stdlib.h>



int Fib(int i)
{
	if (i < 2)
		return i == 0 ? 0 : 1;
	return Fib(i - 1) + Fib(i - 2);

}
int faction(int i)
{
	if (i==0)
		return 1;
	return faction(i-1) * i;
}
void move(int n,char x,char y,char z)
{
	if (1 == n)
	{
		printf("%c->%c\n", x, z);
	}
	else
	{
		move(n - 1, x, z, y);
		printf("%c->%c\n", x, z);
		move(n - 1, y, x, z);
	}
}
int main()
{
	
	int n;
	printf("汉诺塔移动步骤如下：\n");
	move(3, 'x', 'y', 'z');
	//int sum=Fib(3);
	//int sum = faction(4);
	//printf("%d", sum);
	return 0;
}