#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int a = 0;
	for (a = 2; a < sqrt(n); a++)
	{
		if (n % a == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i) == 1)
		{
			printf("%d是素数\n", i);
		}
		else
		{
			printf("%d不是素数\n", i);
		}
	}
	return 0;
}