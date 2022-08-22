#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>



int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("´ó¶Ë");
	}
	else
	{
		printf("Ð¡¶Ë");
	}
	return 0;
}