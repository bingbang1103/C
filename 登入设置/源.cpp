#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	char  password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：>");
		scanf("%s", password);
		if (strcmp(password,"123456") == 0)//==不能比较两个字符串是否相等，应该用库函数-strcmp
		{
			printf("密码正确\n");
			break;
		}
		else
		{
			printf("密码错误");
		}
	}
	if (i >= 3)
	{
		printf("程序退出！\n");
	}
		return 0;
}