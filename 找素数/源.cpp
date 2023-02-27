
#include<stdio.h>
int main£¨£©
/*
{
	int n = 2,counter = 0;
	while (n <= 100)
	{
		int i = 2;
		while (i < n)
		{
			if (n % i == 0)
			{
				break;
			}
			n++;
		}
		if (n == i)
		{
			printf("%d", n);
			counter++;
		}
		i++;
	}
	printf("counter=%d\n", counter);
	return 0;
}
*/
{

	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			printf("%d ",i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}