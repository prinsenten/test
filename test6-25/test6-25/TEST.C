#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//void rotate(int** matrix, int matrixSize, int* matrixColSize) {
//    int matrixnew[matrixSize][matrixSize];
//    for (int i = 0; i < matrixSize; i++)
//    {
//        for (int j = 0; j < matrixSize; j++)
//        {
//            matrixnew[i][j] = matrix[i][j];
//        }
//    }
//    for (int i = 0; i < matrixSize; i++)
//    {
//        for (int j = 0; j < matrixSize; j++)
//        {
//            matrix[i][j] = matrixnew[j][matrixSize - 1 - i];
//        }
//    }
//}
//int main()
//{
//    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9,} };
//    int matrixSize = 3;
//    int matrixColSize = 3;
//    rotate(matrix, matrixSize, matrixColSize);
//    return 0;
//}
//void swap(char* a, char* b)
//{
//    char t = *a;
//    *a = *b, * b = t;
//}
//void reverseString(char* s, int sSize) {
//    int left = 0;
//    int right = sSize - 1;
//    while (left < right)
//    {
//        swap(s + left, s + right);
//        left++;
//        right--;
//    }
//    printf("%s", s);
//}
//int main()
//{
//    char s[]="hello";
//    int sz = sizeof(s);
//    printf("sz=%d ", sz);
//    reverseString(s, sz);
//    printf("%s", s);
//    return 0;
//}
//int main()
//{
//	int i = 10;
//	while (i>5)
//	{
//		i--;
//		for (int j = 0; j < 10; j++)
//		{
//			if (i == j)
//			{
//				printf("%d", i);
//				break;
//			}
//		}
//		printf("%d ", i);
//
//	}
//
//	return 0;
// }
#include<string.h>
//int firstUniqChar(char* s) {
//    int first = 0;
//    int sSize = sizeof(s) - 1;
//    while (first < sSize)
//    {
//        for (int i = first + 1; i < sSize; i++)
//        {
//            if (strcmp(s + first, s + i) == 0);
//            {
//                break;//Ìø³öforÑ­»· 
//            }
//            if (i = sSize - 1 && strcmp(s + first, s + i) != 0)
//            {
//                return first;
//            }
//        }
//        first++;
//    }
//    return -1;
//}
//int main()
//{
//    char s[] = "leetcode";
//    firstUniqChar(s);
//    return 0;
//}
int isAnagram(char* s, char* t) {
    int a[26] = { 0 };
    int len1 = strlen(s);
    int len2 = strlen(t);
    if (len1 != len2)
        return -1;
    for (int i = 0; i < len1; i++)
    {
        a[s[i] - 'a']++;
        a[t[i] - 'a']--;
    }
    for (int i = 0; i < len1; i++)
    {
        if (a[i] != 0)
            return -1;
    }
    return 1;
}
int main()
{
    char s[] = "xl";
    char t[] = "nm";
    int ret=isAnagram(s, t);
    printf("%d", ret);
	return 0;
}