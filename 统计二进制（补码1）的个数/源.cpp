#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int count_bit_one(unsigned int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	/*for (int i = 0; i < 32; i++)
	{
		if (((n >> i) & 1) == 1)
		{
			count++;
		}
	}*/
	/*while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n=n / 2;
	}*/
	return count;
}
int main()
{
	int a = 0;
	int count = 0;
	scanf("%d", &a);
	count = count_bit_one(a);
	printf("count=%d", count);
	return 0;
}