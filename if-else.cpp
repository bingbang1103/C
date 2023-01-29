#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int age=80;
	/*printf("请输入年龄：",age);
	scanf("%d\n",&age);*/
	if (age < 18)
		printf("未成年！");
	else if (18 <= age && age < 18)
		printf("青年");
	else if (28 <= age && age < 50)
		printf("壮年");
	else if (50 <= age && age < 100)
		printf("老年");
	else if (age >= 100)
		printf("老寿星");
	return 0;
}
