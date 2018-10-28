#include "MergeSort.h"
#include <malloc.h>


void Merge(int A[], int left, int mid, int right)
{
	int len = right - left + 1;
	//int *temp = new int[len];       // �����ռ�O(n)
	int *temp = (int *)malloc(len * sizeof(int));
	int index = 0;
	int i = left;                   // ǰһ�������ʼԪ��
	int j = mid + 1;                // ��һ�������ʼԪ��
	while (i <= mid && j <= right)
	{
		temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // ���Ⱥű�֤�鲢������ȶ���
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
	// ������������г���Ϊ1ʱ���ݹ鿪ʼ���ݣ�����merge����
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
	// ����������,ǰһ��ΪA[left...mid]����һ��������ΪA[mid+1...right]
	int left, mid, right;
	// ������Ĵ�Сi��ʼΪ1��ÿ�ַ���
	for (int i = 1; i < len; i *= 2)
	{
		left = 0;
		// ��һ�����������(��Ҫ�鲢)
		while (left + i < len)
		{
			mid = left + i - 1;
			// ��һ���������С���ܲ���
			right = mid + i < len ? mid + i : len - 1;
			Merge(A, left, mid, right);
			// ǰһ����������������ƶ�
			left = right + 1;
		}
	}
}


