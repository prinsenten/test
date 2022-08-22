#include<stdio.h>


#include<stdlib.h>


struct ListNode {
    int val;
    struct ListNode* next;
};

int isPalindrome(struct ListNode* head)
{
    struct ListNode* cur = head;
    int arr[] = { 0 };
    int i = 0;
    while (cur)
    {
        arr[i] = cur->val;
        i++;
        cur = cur->next;
    }
    int len = strlen(arr);
    int left = 0, right = len - 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            return -1;
        }
        else
        {
            left++;
            right--;
        }
    }
    return 1;
}
int main()
{
    struct ListNode* plist=NULL;

	return 0;
}