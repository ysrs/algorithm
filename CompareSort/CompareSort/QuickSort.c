#include "QuickSort.h"
#include "CommonUtil.h"

int Partition(int A[], int left, int right)
{
	int pivot = A[right];               // ����ÿ�ζ�ѡ�����һ��Ԫ����Ϊ��׼
	int tail = left - 1;                // tailΪС�ڻ�׼�����������һ��Ԫ�ص�����
	for (int i = left; i < right; i++)  // ������׼���������Ԫ��
	{
		if (A[i] <= pivot)              // ��С�ڵ��ڻ�׼��Ԫ�طŵ�ǰһ��������ĩβ
		{
			Swap(A, ++tail, i);
		}
	}
	Swap(A, tail + 1, right);           // ���ѻ�׼�ŵ�ǰһ��������ĺ�ߣ�ʣ�µ���������Ǵ��ڻ�׼��������
										// �ò������п��ܰѺ���Ԫ�ص��ȶ��Դ��ң����Կ��������ǲ��ȶ��������㷨
	return tail + 1;                    // ���ػ�׼������
}

void QuickSort(int A[], int left, int right)
{
	if (left < right)
	{
		int pivot_index = Partition(A, left, right); // ��׼������
		QuickSort(A, left, pivot_index - 1);
		QuickSort(A, pivot_index + 1, right);
	}
}

