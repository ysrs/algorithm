#include "RadixSort.h"
#include <cstdlib>

static const int dn = 3;                // 待排序的元素为三位数及以下
static const int k = 10;                // 基数为10，每一位的数字都是[0,9]内的整数
static int C[k];

// 获得元素x的第d位数字
static int GetDigit(int x, int d)
{
	// 最大为三位数，所以这里只要到百位就满足了
	int radix[] = { 1, 1, 10, 100 };
	return (x / radix[d]) % 10;
}


// 依据元素的第d位数字，对A数组进行计数排序
static void CountingSort(int A[], int n, int d)
{
	for (int i = 0; i < k; i++)
	{
		C[i] = 0;
	}
	for (int i = 0; i < n; i++)
	{
		C[GetDigit(A[i], d)]++;
	}
	for (int i = 1; i < k; i++)
	{
		C[i] = C[i] + C[i - 1];
	}
	int *B = (int*)malloc(n * sizeof(int));
	for (int i = n - 1; i >= 0; i--)
	{
		int dight = GetDigit(A[i], d);  // 元素A[i]当前位数字为dight   
		B[--C[dight]] = A[i];           // 根据当前位数字，把每个元素A[i]放到它在输出数组B中的正确位置上
										// 当再遇到当前位数字同为dight的元素时，会将其放在当前元素的前一个位置上保证计数排序的稳定性
	}
	for (int i = 0; i < n; i++)
	{
		A[i] = B[i];
	}

	free(B);
}

void LsdRadixSort(int A[], int n)
{
	// 从低位到高位
	for (int d = 1; d <= dn; d++)
	{
		// 依据第d位数字对A进行计数排序
		CountingSort(A, n, d);
	}
}


