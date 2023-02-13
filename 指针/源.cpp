#include<stdio.h>
int main()
{
	char ch = 'a';
	char* pc = &ch;
	*pc = 'w';
	printf("%c\n", ch);
	printf("%d", sizeof(pc));
	return 0;
}
