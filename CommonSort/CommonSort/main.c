/*
 * 参考：
 * https://www.cnblogs.com/eniac12/p/5329396.html
 * https://www.jianshu.com/p/42f81846c0fb
 * 
 * 我们通常所说的排序算法往往指的是内部排序算法，即数据记录在内存中进行排序。
 * 排序算法大体可分为两种：
 * 一种是比较排序，时间复杂度O(nlogn) ~ O(n^2)，主要有：冒泡排序，选择排序，插入排序，归并排序，堆排序，快速排序等。
 * 另一种是非比较排序，时间复杂度可以达到O(n)，主要有：计数排序，基数排序，桶排序等。
 */


#include <stdio.h>
#include "CommonUtil.h"
#include "BubbleSort.h"
#include "CockTailSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "DichotomyInsertionSort.h"
#include "ShellSort.h"
#include "MergeSort.h"
#include "HeapSort.h"
#include "QuickSort.h"


int main()
{
	int iArray[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };
	int iLength = sizeof(iArray) / sizeof(int);
	// 从小到大选择排序
	//printf("Before Selection Sort...\n");
	//PrintArray(iArray, iLength);
	//SelectionSort(iArray, iLength);
	//printf("After Selection Sort...\n");
	//PrintArray(iArray, iLength);

	// 从小到大插入排序
	//printf("Before Insertion Sort...\n");
	//PrintArray(iArray, iLength);
	//InsertionSort(iArray, iLength);
	//printf("After Insertion Sort...\n");
	//PrintArray(iArray, iLength);

	// 从小到大排序
	//printf("Before Dichotomy Insertion Sort...\n");
	//PrintArray(iArray, iLength);
	//DichotomyInsertionSort(iArray, iLength);
	//printf("After Dichotomy Insertion Sort...\n");
	//PrintArray(iArray, iLength);

	// 从小到大排序
	//printf("Before Shell Sort...\n");
	//PrintArray(iArray, iLength);
	//ShellSort(iArray, iLength);
	//printf("After Shell Sort...\n");
	//PrintArray(iArray, iLength);


	//int A1[] = { 6, 5, 3, 1, 8, 7, 2, 4 };      // 从小到大归并排序
	//int A2[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	//int n1 = sizeof(A1) / sizeof(int);
	//int n2 = sizeof(A2) / sizeof(int);
	//MergeSortRecursion(A1, 0, n1 - 1);          // 递归实现
	//MergeSortIteration(A2, n2);                 // 非递归实现
	//printf("递归实现的归并排序结果：");
	//for (int i = 0; i < n1; i++)
	//{
	//	printf("%d ", A1[i]);
	//}
	//printf("\n");
	//printf("非递归实现的归并排序结果：");
	//for (int i = 0; i < n2; i++)
	//{
	//	printf("%d ", A2[i]);
	//}

	//int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// 从小到大堆排序
	//int n = sizeof(A) / sizeof(int);
	//HeapSort(A, n);
	//printf("堆排序结果：");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", A[i]);
	//}
	//printf("\n");

	int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 }; // 从小到大快速排序
	int n = sizeof(A) / sizeof(int);
	QuickSort(A, 0, n - 1);
	printf("快速排序结果：");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");


	getchar();
	return 0;
}



