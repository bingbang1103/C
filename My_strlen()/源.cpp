#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int my_strlen(char* str)//char* str指针，根据地址找元素
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);// str + 1是下一个元素的地址
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "dengzhibin";
	int len = my_strlen(arr);//求字符串长度，arr是数组，数组传参传的不整个数组，而是第一个元素的地址
	printf("%d\n", len);
	return 0;
}
