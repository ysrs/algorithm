#include "CountingSort.h"
#include <cstdlib>

static const int k = 100;   // 基数为100，排序[0,99]内的整数
static int C[k];            // 计数数组

void CountingSort(int A[], int n)
{
	for (int i = 0; i < k; i++)   // 初始化，将数组C中的元素置0(此步骤可省略，整型数组元素默认值为0)
	{
		C[i] = 0;
	}
	for (int i = 0; i < n; i++)   // 使C[i]保存着等于i的元素个数
	{
		C[A[i]]++;
	}
	for (int i = 1; i < k; i++)   // 使C[i]保存着小于等于i的元素个数，排序后元素i就放在第C[i]个输出位置上
	{
		C[i] = C[i] + C[i - 1];
	}
	int *B = (int *)malloc((n) * sizeof(int));// 分配临时空间,长度为n，用来暂存中间数据
	for (int i = n - 1; i >= 0; i--)    // 从后向前扫描保证计数排序的稳定性(重复元素相对次序不变)
	{
		B[--C[A[i]]] = A[i];      // 把每个元素A[i]放到它在输出数组B中的正确位置上
								  // 当再遇到重复元素时会被放在当前元素的前一个位置上保证计数排序的稳定性
	}
	for (int i = 0; i < n; i++)   // 把临时空间B中的数据拷贝回A
	{
		A[i] = B[i];
	}

	free(B);    // 释放临时空间
}


