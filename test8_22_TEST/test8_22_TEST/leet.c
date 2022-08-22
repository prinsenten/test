#include<stdio.h>
#include<stdlib.h>

//int lengthOfLongestSubstring(char* s) {
//    int len = strelen(s);
//    int left = 0;
//    char arr[26] = { 0 };
//    int count = 0;
//    while (left < len)
//    {
//        arr[*(s + left)]++;
//        left++;
//        count++;
//        for (int i = 0; i < 26; i++)
//        {
//            if (arr[i] > 1)
//                return count;
//        }
//    }
//    return NULL;
//}

//int  isPalindrome(int x) {
//    if (x < 0 || !x % 10)
//        return 0;
//    int temp = x;
//    int sum = 0, count = 0, cnt;
//    while (temp /= 10)
//    {
//        count++;
//    }
//    int ret = x;
//    double pl = (double)count;
//    while (pl)
//    {
//        cnt = ret % 10;
//        sum = cnt * pow(10.0, pl--);
//    }
//    if (ret == x)
//        return 1;
//    return 0;
//}
//int main()
//{
//    int x = 1211;
//    int ret = isPalindrome(x);
//    if (ret)
//        printf("true\n");
//    else
//         printf("false");
//    return 0;
//}


int reverse(int x) {
    int j = 0, i = 0, flag = 0;
    int s[11] = { '\0' };
    if (x < 0)
    {
        flag = 1;
        x = -x;
    }
    int temp = x;
    if (x == 0)
        return 0;
    while (temp)
    {
        s[j] = temp % 10;
        temp /= 10;
        j++;
    }
    int sum = 0;
    while (i < j)
    {
        sum = sum * 10 + s[i];
        i++;
    }
    if (flag)
        return -sum;
    else
        return sum;
}
int main()
{

    int x = 1534236469;
   int ret= reverse(x);
   printf("%d\n", ret);
    return 0;
}