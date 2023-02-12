#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int score = 0;
	printf("请输入成绩：");
	scanf("%d", &score);
	if (score <= 100)
	{
		printf("成绩为A(90~100)");
	}
	else if (score <= 90)
	{
		printf("成绩为B(80~90)");
	}
	else if (score <= 80)
	{
		printf("成绩为C(70~80)");
	}
	else if (score <= 70)
	{
		printf("成绩为D(60~70)");
	}
	else if (score <= 60)
	{
		printf("成绩为E(0~60)");
	}
	return 0;
}