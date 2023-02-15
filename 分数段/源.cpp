#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char score;
	printf("请输入分数段：");
	scanf("%c", &score);
	switch (score)
	{
	case 'A':
		printf("优秀（80~100）");
		break;
	case 'B':
		printf("及格（60~80）");
		break;
	case 'C':
		printf("不及格（0~60）");
		break;
	default:
		printf("输入错误");
	}
	return 0;
}