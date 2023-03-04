#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int is_leap_year(int y)
{
	if ((y % 4 == 0 )&&(y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (is_leap_year(year) == 1)
		{
			printf("%d是闰年\t",year);
		}
		else
		{
			printf("%d不是闰年\t", year);
		}
	}
	return 0;
}