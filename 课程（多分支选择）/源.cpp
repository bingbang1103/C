#include<stdio.h>
int main()
{
	int num1 = 2, num2 = 1;
	while (num1 <= 100)
	{
		num2 = 2;
		while (num2 <= num1)
		{
			if (num1 % num2 == 0)
			{
				//printf("%dÊÇºÍÊı",num1);
				break;
			}

			num2++;
		}
		num1++;
	}
	return 0; 
}