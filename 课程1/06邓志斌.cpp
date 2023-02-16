#include<stdio.h>
int main()
{
	int counter = 0,i=0;
	printf("请输入字符:");
	char ch = getchar();
	while ((ch=getchar())!= '\n')
	{
		if (ch==' ')
		{
			i= 0;
			//break;
			//continue;
		}
		else if (i == 0)
		{
			i = 1;
			counter++;
		}
	}
	printf("单词个数为：%d", counter);
	return 0;
}
