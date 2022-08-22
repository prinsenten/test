#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



// int NumberOf1(int n)
//{
//	 int count = 0;
//	 int flag = 1;
//	 while (flag != 0)
//	 {
//		 if ((flag & n) !=0)
//		 {
//			 count++;
//		 }
//		 flag = flag << 1;
//	 }
//	 return count;
//}
// int main()
// {
//	 int input = 0;
//	 scanf("%d", &input);
//	 int ret=NumberOf1(input);
//	 printf("%d", ret);
//	 return 0;
// }

#include<assert.h>
//char *my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	                         //把b放到了a的位置上
//	while (*dest++ = *src++)//值等于b b ！=‘\0’所以进入
//	{
//		; //直到\0被赋予a，然后就直接跳出循环
//	}
//	return ret;//返回目的空间的起始地址
//}
//#include<string.h>
//int main()
//{
//	char arr1[] = "abcdefgh";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//
//	printf("%s\n", arr1);
//	return 0;
//}



#include<string.h>
#include<stdlib.h>

//char *my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//
//	//找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//
//	//追加字符，和strcpy一样的操作
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//int my_strcmp(const char *str1,const char *str2 )
//{
//	assert(str1 && str2);
//		//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == *str2)
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}
//
//int main()
//{
//	char *p1 = "abcdef";
//	char* p2 = "sqwer";
//	int ret=my_strcmp(p1, p2);
//
//	printf("%d\n", ret);
//	return 0;
//}
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char *s1 = p1;//留p1的地址
//	char *s2 = p2;//留p2的地址
//	char* cur = p1;
//	if (*p2 == '\0')//防止p2为空字符串
//		return p1;
//	while (*cur)
//	{    
//		s1 = cur;
//		s2 = p2;
//
//		while ((*s1!='\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//}
//int main()
//{
//	char *p1 = "abcdef";
//	char *p2 = "def";
//	char* ret=my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("%子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "ps@cto.com";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
	//char *ret=strtok(arr, p);
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
	//ret = strtok(NULL, p);
	//printf("%s\n", ret);
//	return 0;
//}
#include<errno.h>
//int main()

	//errno是一个全局的错误码变量
	//当c语言的库函数在执行过程中，发生错误会把对应的错误码，赋值到errno中
	//char* str = strerror(errno);
	//printf("%s\n", str);
	
	//打开文件
//	FILE* pf = fopen("test.txt", "r");//用read形式打开
//
//	if (pf == NULL)//如果没找到文件，报错 
//	{
//		printf("%s\n", strerror(errno));//提示报错原因
//	}
//	else
//	{
//		printf("open file success");
//	}
//	return 0;
//}


//void *my_memcpy(void* dest, const void* src, size_t num)
//{   //因为void*dest 无法解引用，所以强制类型转换
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//void my_memmove(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)//比较大小，不涉及类型 如果是解引用要强制类型转换
//	{
//		//从前向后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//从后向前
//		while (num--)
//		{
//			*((char*)dest + num)=*((char*)src+num);//while中num已经--了所以直接指向了目的地最后的地址
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,5,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2,arr,20);
//	my_memmove(arr + 2, arr, 20);//12345拷贝到34567上
//	for (i = 0; i < 10; i ++ )
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);//8个字节就是1和2
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	//char arr1[10] = "";
	//memset(arr1, '#', 10);
	int arr2[10] = { 0 };
	//40个字节
	//01 01 01 01 01 01 01 01 01 01 00 00 00 ....
	memset(arr2, 1, 10);//只修改了前十个
	return 0;
}