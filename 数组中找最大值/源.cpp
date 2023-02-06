#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i, max;
	max = arr[0];
	for (i = 0; i < sz; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("max=%d\n", max);
	return 0;
}
//#include <stdio.h>
//int main() {
//    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//    int loop, largest;
//
//    largest = array[0];
//
//    for (loop = 1; loop < 10; loop++)
//    {
//        if (largest < array[loop])
//            largest = array[loop];
//    }
//
//    printf("最大元素为 %d", largest);
//
//    return 0;
//}

//