#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}//charֻ���-128~127  ����ѭ��
//	//-1 -2 ....-128 127 126 ....3 2 1 0 -1 -2 ....
//	//strlenҪ�ҵ�0�Ż�ֹͣ ������255λʱ�ҵ���0
//	printf("%d\n", strlen(a));//255
//	return 0;
//}

        //    1
      //     1 1
	//	    1 2 1
//  	   1 3 3 1
//        1 4 6 4 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//    int killer = 0;
//    for (killer = 'a'; killer <= 'd'; killer++)
//    {
//        if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//        {
//            printf("killer=%c\n", killer);
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    int d = 0;
//    int e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {//if��佫ÿ����˵�Ļ�һ����������0+1=1
//                        if (((b == 2) + (a == 3) == 1) &&
//                            ((b == 2) + (e == 4) == 1) &&
//                            ((c == 1) + (d == 2) == 1) &&
//                            ((c == 5) + (d == 3) == 1) &&
//                            ((e == 4) + (a == 1) == 1))
//                        {//��� Ϊ120 ��ֹ���ظ�
//                            if (a * b * c * d * e == 120)
//                                printf("a=%d b=%d c=%d e=%d\n", a, b, c, d, e);
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return 0;
//}

#include<assert.h>
//void left_move(char* arr,int *k)
//{
//    assert(arr);
//    int i = 0;
//    int len = strlen(arr);
//    for (i = 0; i < *k; i++)
//    {
//        //����һ��
//        char tmp = *arr;
//        int j = 0;
//        for (j = 0; j <len-1 ; j++)
//        {
//            *(arr + j) = *(arr + j + 1);
//        }
//        *(arr + len - 1) = tmp;
//    }
//}
//������ת��
//ab cdef     �ֿ�����
//ba fedc      ��������
//cdefab      ��������
//void reverse(char* left, char* right)
//{
//    assert(left != NULL);
//    assert(right != NULL);
//    while (left<right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void left_move(char* arr, int k)
//{
//    assert(arr);
//    int len = strlen(arr);
//    assert(k <= len);
//    reverse(arr,arr+k-1);//�������
//    reverse(arr+k,arr+len-1);//�����ұ�
//    reverse(arr,arr+len-1);//��������
//}
//int is_left_move(char* s1, char* s2)
//{
//    int len = strlen(s1);
//    int i = 0;
//    for (i = 0; i < len; i++)
//    {
//        left_move(s1, 1);
//        int ret = strcmp(s1, s2);
//        if (ret == 0)
//            return 1;
//    }
//    return 0;
//}
//int is_left_move(char* str1, char* str2)
//{
//    int len1= strlen(str1);
//    int len2 = strlen(str2);
//    if (len1 != len2)//��ֹ�ַ����Ȳ�һ��Ҳ����ɹ������
//        return 0;
//    //1.��str1�ַ�����׷��һ��str1�ַ���
//    //strcat(str1,str2);//err
//    //strcat����ʹ�ã���Ϊ׷��ͬһ���������Ҳ��� \0,Ȼ�����
//    strncat(str1, str1, len1);
//    //strncat������strcat��һ���ַ������жϣ����Կ�����
//    //2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//    //strstr-Ѱ���Ӵ�
//    char* ret = strstr(str1, str2);
//    if (ret == NULL)
//    {
//          return 0;
//    }
//    else
//    {
//          return 1;
//    }
//}
//int main()
//{
//    char arr1[30] = "abcdef";
//    char arr2[] = "cdefab";
//    int ret=is_left_move(arr1, arr2);
//    if (ret == 1)
//        printf("yes\n");
//    else
//        printf("no\n");
//    return 0;
//}
//int  main()
//{
//    char arr[] = "abcdef";
//    int input = 0;
//    scanf("%d", &input);
//    left_move(arr, &input);
//    printf("%s\n", arr);
//    return 0;
//}


//1 2 3
//4 5 6
//7 8 9

//1 2 3
//2 3 4
//3 4 5
int FindNum(int arr[3][3], int k, int row, int col)
{
    int x = 0;
    int y = col - 1;
    while (y>=0&&x<=row-1)
    {
        if (arr[x][y] > k)//���ϽǱ�k��
        {
            y--;
        }
        else if (arr[x][y] < k)//
        {
            x++;
        }
        else
        {
            return 1;
        }
   }
}
int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int k = 7;
    int ret = FindNum(arr, k, 3, 3);
    if (ret == 1)
        printf("�ҵ���\n");
    else
        printf("�Ҳ���\n");
    return 0;
}












