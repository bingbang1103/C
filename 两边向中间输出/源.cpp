#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	char arr1[] = "hello,dengzhibin";
	char arr2[] = "################";
	int right = strlen(arr1) - 1;//字符串长度-1=右下标
	int left = 0;
	while (left <= right)
	{
		 arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(1000);//休息1000毫秒
		//system("cls");//清空屏幕
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}