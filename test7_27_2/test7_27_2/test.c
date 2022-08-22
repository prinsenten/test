#include<stdio.h>


int main()
{
	
	int ret = 0;
	char *strs[] = { "flower","flow","flight" };
	int strsSize = sizeof(strs) / sizeof(char*);
	int len = strlen(*strs);


	printf("%s", *strs);//flower
	printf("\n");
	printf("%s", *(strs + 1));//flow
	printf("\n");
	printf("%s", *strs+1);//lower
	printf("\n");

	//for (int i = 0; i < strsSize-1; i++)
	//{
	//	for (int j = 0; j < len; j++)
	//	{
	//		if (strs[i][j]!=strs[i+1][j]);
	//		{
	//			ret = j;
	//			break;
	//		}
	//	}
	//}
	return 0;
}