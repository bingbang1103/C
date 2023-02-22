#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char input[20] = {0};
	system("shutdown -s -t 60");
again:
	printf("请注意，电脑即将关机，如果输入：‘取消关机’，就取消关机");
	scanf("%c", &input);
	if (strcmp(input, "取消关机") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}