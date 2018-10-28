#include "HeapSort.h"
#include "CommonUtil.h"

void Heapify(int A[], int i, int size)
{
	int left_child = 2 * i + 1;         // ��������
	int right_child = 2 * i + 2;        // �Һ�������
	int max = i;                        // ѡ����ǰ����������Һ�������֮�е����ֵ
	if (left_child < size && A[left_child] > A[max])
		max = left_child;
	if (right_child < size && A[right_child] > A[max])
		max = right_child;
	if (max != i)
	{
		Swap(A, i, max);                // �ѵ�ǰ�����������(ֱ��)�ӽڵ���н���
		Heapify(A, max, size);          // �ݹ���ã������ӵ�ǰ������½��жѵ���
	}
}

int BuildHeap(int A[], int n)
{
	int heap_size = n;
	// ��ÿһ����Ҷ��㿪ʼ���½��жѵ���
	for (int i = heap_size / 2 - 1; i >= 0; i--)
	{
		Heapify(A, i, heap_size);
	}

	return heap_size;
}

void HeapSort(int A[], int n)
{
	// ����һ������
	int heap_size = BuildHeap(A, n);
	// �ѣ���������Ԫ�ظ�������1��δ�������
	while (heap_size > 1)
	{
		// ���Ѷ�Ԫ����ѵ����һ��Ԫ�ػ��������Ӷ���ȥ�����һ��Ԫ��
		// �˴������������п��ܰѺ���Ԫ�ص��ȶ��Դ��ң����Զ������ǲ��ȶ��������㷨
		Swap(A, 0, --heap_size);
		Heapify(A, 0, heap_size);     // ���µĶѶ�Ԫ�ؿ�ʼ���½��жѵ�����ʱ�临�Ӷ�O(logn)
	}
}


