/*
 * 参考 https://www.cnblogs.com/eniac12/p/5332117.html
 */

#include <stdio.h>
#include <cstdlib>

#include "CountingSort.h"
#include "RadixSort.h"
#include "BucketSort.h"


int main()
{
	//int A[] = { 15, 22, 19, 46, 27, 73, 1, 19, 8 };  // 针对计数排序设计的输入，每一个元素都在[0,100]上且有重复元素
	//int n = sizeof(A) / sizeof(int);
	//CountingSort(A, n);
	//printf("计数排序结果：");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", A[i]);
	//}
	//printf("\n");


	//int A[] = { 20, 90, 64, 289, 998, 365, 852, 123, 789, 456 };// 针对基数排序设计的输入
	//int n = sizeof(A) / sizeof(int);
	//LsdRadixSort(A, n);
	//printf("基数排序结果：");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", A[i]);
	//}
	//printf("\n");

	int A[] = { 29, 25, 3, 49, 9, 37, 21, 43 };// 针对桶排序设计的输入
	int n = sizeof(A) / sizeof(int);
	BucketSort(A, n);
	printf("桶排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}



