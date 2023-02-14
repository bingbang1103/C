#include<stdio.h>
int main()
{
	for (int row = 1; row <=4; row++)
	{
		//printf("*");
		//printf("\n");
		for (int i = 1; i <= 4-row;i++)
		{
			printf(" ");
		}
		for (int col = 1; col <=(2* row-1); col++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int row = 3; row >= 1; row--)
	{
		for (int i=1;i <= 4 - row; i++)
		{
			printf(" ");
		}
		for (int col = 1; col <= (2 * row - 1); col++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}