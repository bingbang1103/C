#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Print(int m)
{
	printf("二进制：");
	for (int i = 31; i >= 0; i -= 1)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("奇数位：");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ",(m>>i)&1);
	}
	printf("\n");
	printf("偶数位：");
	for (int i = 31; i >= 0; i -= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
}
int main()
{
	int m = 0;
	scanf("%d",&m);
	Print(m);
	return 0;
}