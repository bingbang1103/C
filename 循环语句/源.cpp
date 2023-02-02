#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	/*int num = 0;
	printf("进入大学开始买彩票");
	scanf("%d", &num);
	if (num == 1)
		printf("中了500万，迎娶娶白富美");
	else
		printf("没有中");
		*/
	int line = 0;
	printf("学习C语言");
	while (line <20000)
	{
		printf("继续敲代码:%d\n", line);
		line++;
	}
	if (line >= 20000)
		printf("可以找到一个好工作");
	return 0;
}