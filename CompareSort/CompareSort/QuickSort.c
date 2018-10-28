#include "QuickSort.h"
#include "CommonUtil.h"

int Partition(int A[], int left, int right)
{
	int pivot = A[right];               // 这里每次都选择最后一个元素作为基准
	int tail = left - 1;                // tail为小于基准的子数组最后一个元素的索引
	for (int i = left; i < right; i++)  // 遍历基准以外的其他元素
	{
		if (A[i] <= pivot)              // 把小于等于基准的元素放到前一个子数组末尾
		{
			Swap(A, ++tail, i);
		}
	}
	Swap(A, tail + 1, right);           // 最后把基准放到前一个子数组的后边，剩下的子数组既是大于基准的子数组
										// 该操作很有可能把后面元素的稳定性打乱，所以快速排序是不稳定的排序算法
	return tail + 1;                    // 返回基准的索引
}

void QuickSort(int A[], int left, int right)
{
	if (left < right)
	{
		int pivot_index = Partition(A, left, right); // 基准的索引
		QuickSort(A, left, pivot_index - 1);
		QuickSort(A, pivot_index + 1, right);
	}
}

