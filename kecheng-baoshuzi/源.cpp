#include<stdio.h>
int main()
{
	int i = 1;
	while (i <= 100)
	{
		for (i = 1; i <= 100; i++)
		{
			if (i % 7 == 0)
			{
				break;
			}
			printf("%d", i);
		}
	}
	return 0;
}