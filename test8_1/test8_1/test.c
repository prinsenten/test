#include"STList.h"
#include<stdbool.h>
#include<string.h>



int isPalindrome(STL* head) {
    STL* cur = head;
    int arr[900] = { 0 };
    int i = 0;
    while (cur)
    {
        arr[i] = cur->Data;
        i++;
        cur = cur->next;
    }
  
    int len = i;
    int left = 0, right = len-1 ;
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            return 0;
        }
        else
        {
            left++;
            right--;
        }
    }
    return 1;
}
void test()
{
    STL* plist = NULL;
    STListPushBack(&plist, 1);
    STListPushBack(&plist, 2);



    STLPrint(plist);

    int pos = isPalindrome(plist);
    if (pos)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
int main()
{
	test();
	return 0;
}