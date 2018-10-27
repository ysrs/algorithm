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


int main()
{
	int iArray[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 };
	int iLength = sizeof(iArray) / sizeof(int);
	// 从小到大选择排序
	printf("Before Selection Sort...\n");
	PrintArray(iArray, iLength);

	SelectionSort(iArray, iLength);

	printf("After Selection Sort...\n");
	PrintArray(iArray, iLength);

	getchar();
	return 0;
}



