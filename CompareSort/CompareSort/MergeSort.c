#include "MergeSort.h"
#include <malloc.h>


void Merge(int A[], int left, int mid, int right)
{
	int len = right - left + 1;
	//int *temp = new int[len];       // 辅助空间O(n)
	int *temp = (int *)malloc(len * sizeof(int));
	int index = 0;
	int i = left;                   // 前一数组的起始元素
	int j = mid + 1;                // 后一数组的起始元素
	while (i <= mid && j <= right)
	{
		temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // 带等号保证归并排序的稳定性
	}
	while (i <= mid)
	{
		temp[index++] = A[i++];
	}
	while (j <= right)
	{
		temp[index++] = A[j++];
	}
	for (int k = 0; k < len; k++)
	{
		A[left++] = temp[k];
	}
	free(temp);
}

void MergeSortRecursion(int A[], int left, int right)
{
	// 当待排序的序列长度为1时，递归开始回溯，进行merge操作
	if (left != right)
	{
		int mid = (left + right) / 2;
		MergeSortRecursion(A, left, mid);
		MergeSortRecursion(A, mid + 1, right);
		Merge(A, left, mid, right);
	}
}

void MergeSortIteration(int A[], int len)
{
	// 子数组索引,前一个为A[left...mid]，后一个子数组为A[mid+1...right]
	int left, mid, right;
	// 子数组的大小i初始为1，每轮翻倍
	for (int i = 1; i < len; i *= 2)
	{
		left = 0;
		// 后一个子数组存在(需要归并)
		while (left + i < len)
		{
			mid = left + i - 1;
			// 后一个子数组大小可能不够
			right = mid + i < len ? mid + i : len - 1;
			Merge(A, left, mid, right);
			// 前一个子数组索引向后移动
			left = right + 1;
		}
	}
}


