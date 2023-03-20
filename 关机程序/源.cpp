#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");//执行·系统命令-关机
	again:
		printf("请输入’我是猪‘，否则60秒后关机\n");
		scanf("%s", &input);//%s-输入字符串
		if (strcmp(input, "我是猪") == 0)//判断字符串是否相等
		{
			system("shutdown -a");
		}
		else
		{
			goto again;
		}
	return 0;
}