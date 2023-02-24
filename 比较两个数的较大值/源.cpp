#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int num1=0, num2=0,max=0;
	printf("请输入第一个数:%d\n请输入第二个数为：%d\n",num1,num2);
	scanf("%d%d", &num1, &num2);
	max = Max(num1, num2);
	printf("较大的数是：%d", max);
	return 0;
}