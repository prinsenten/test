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
//	                         //��b�ŵ���a��λ����
//	while (*dest++ = *src++)//ֵ����b b ��=��\0�����Խ���
//	{
//		; //ֱ��\0������a��Ȼ���ֱ������ѭ��
//	}
//	return ret;//����Ŀ�Ŀռ����ʼ��ַ
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
//	//�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//
//	//׷���ַ�����strcpyһ���Ĳ���
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
//		//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == *str2)
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
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
//	char *s1 = p1;//��p1�ĵ�ַ
//	char *s2 = p2;//��p2�ĵ�ַ
//	char* cur = p1;
//	if (*p2 == '\0')//��ֹp2Ϊ���ַ���
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
//		printf("%�Ӵ�������\n");
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

	//errno��һ��ȫ�ֵĴ��������
	//��c���ԵĿ⺯����ִ�й����У����������Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
	//char* str = strerror(errno);
	//printf("%s\n", str);
	
	//���ļ�
//	FILE* pf = fopen("test.txt", "r");//��read��ʽ��
//
//	if (pf == NULL)//���û�ҵ��ļ������� 
//	{
//		printf("%s\n", strerror(errno));//��ʾ����ԭ��
//	}
//	else
//	{
//		printf("open file success");
//	}
//	return 0;
//}


//void *my_memcpy(void* dest, const void* src, size_t num)
//{   //��Ϊvoid*dest �޷������ã�����ǿ������ת��
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
//	if (dest < src)//�Ƚϴ�С�����漰���� ����ǽ�����Ҫǿ������ת��
//	{
//		//��ǰ���
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ
//		while (num--)
//		{
//			*((char*)dest + num)=*((char*)src+num);//while��num�Ѿ�--������ֱ��ָ����Ŀ�ĵ����ĵ�ַ
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,5,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2,arr,20);
//	my_memmove(arr + 2, arr, 20);//12345������34567��
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
//	int ret = memcmp(arr1, arr2, 9);//8���ֽھ���1��2
//	printf("%d\n", ret);
//	return 0;
//}

int main()
{
	//char arr1[10] = "";
	//memset(arr1, '#', 10);
	int arr2[10] = { 0 };
	//40���ֽ�
	//01 01 01 01 01 01 01 01 01 01 00 00 00 ....
	memset(arr2, 1, 10);//ֻ�޸���ǰʮ��
	return 0;
}