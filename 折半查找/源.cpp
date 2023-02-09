#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,13 };// 数组
	int k =9;//寻找目标
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组个数
	int left = 0;//左下标
	int right = sz - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] >k)
		{
			right = mid - 1;
		}
		else
		{
			printf("9的下标为：%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("没找到");
	}
	return 0;
}