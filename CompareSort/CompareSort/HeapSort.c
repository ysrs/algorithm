#include "HeapSort.h"
#include "CommonUtil.h"

void Heapify(int A[], int i, int size)
{
	int left_child = 2 * i + 1;         // 左孩子索引
	int right_child = 2 * i + 2;        // 右孩子索引
	int max = i;                        // 选出当前结点与其左右孩子三者之中的最大值
	if (left_child < size && A[left_child] > A[max])
		max = left_child;
	if (right_child < size && A[right_child] > A[max])
		max = right_child;
	if (max != i)
	{
		Swap(A, i, max);                // 把当前结点和它的最大(直接)子节点进行交换
		Heapify(A, max, size);          // 递归调用，继续从当前结点向下进行堆调整
	}
}

int BuildHeap(int A[], int n)
{
	int heap_size = n;
	// 从每一个非叶结点开始向下进行堆调整
	for (int i = heap_size / 2 - 1; i >= 0; i--)
	{
		Heapify(A, i, heap_size);
	}

	return heap_size;
}

void HeapSort(int A[], int n)
{
	// 建立一个最大堆
	int heap_size = BuildHeap(A, n);
	// 堆（无序区）元素个数大于1，未完成排序
	while (heap_size > 1)
	{
		// 将堆顶元素与堆的最后一个元素互换，并从堆中去掉最后一个元素
		// 此处交换操作很有可能把后面元素的稳定性打乱，所以堆排序是不稳定的排序算法
		Swap(A, 0, --heap_size);
		Heapify(A, 0, heap_size);     // 从新的堆顶元素开始向下进行堆调整，时间复杂度O(logn)
	}
}


