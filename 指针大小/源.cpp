#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(short*));
	printf("%d\n",sizeof(double*));
	*/
	int a = 0x11223344;
	//指针类型决定了指针进行解引用操作的时候。能够访问空间的大小。 
	/*int* p;*p能够访问4个字节。
	* char* p;能够访问一个字节。
	* double* p;能够访问8个字节。 
	*/
	int* pa = &a;
	*pa = 0;
	printf("%p", pa);
	return 0;
}
/*
* 野指针:野指针就是指针指向的位置是不可知的。(随机的。 不正确的。没有明确限制的。)
* 原因:
1指针未初始化。// NULL-用来初始化指针,给指针赋值(int *p=NULL)。
2.指针越界访问。
* 3.局部变量被销毁。
*/