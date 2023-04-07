#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Print(int arrx[],int arry[],int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arrx[i]);
	}
	printf("\n");
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arry[i]);
	}

}
int main()
{
	int arr1[] = {1,3,5,7,9};
	int arr2[] = { 2,4,6,8,10 };
	int i = 0;
	int tmp = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	Print(arr1, arr2,sz);//´òÓ¡
	return 0;
}