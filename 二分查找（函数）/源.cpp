#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "binary_search.h"
#include "binary_search.c"
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int n = 7;
	int szs = sizeof(arr) / sizeof(arr[0]);
	int ret=binary_search(arr,  n,szs);

	if (ret == -1)
	{
		printf("找不到指定的数字\n");
	}
	else
	{
		printf("找到指定的数字,下标是：%d\n",ret);
	}
	return 0;
}