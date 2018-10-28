/*
 * �ο���
 * https://www.cnblogs.com/eniac12/p/5329396.html
 * https://www.jianshu.com/p/42f81846c0fb
 * 
 * ����ͨ����˵�������㷨����ָ�����ڲ������㷨�������ݼ�¼���ڴ��н�������
 * �����㷨����ɷ�Ϊ���֣�
 * һ���ǱȽ�����ʱ�临�Ӷ�O(nlogn) ~ O(n^2)����Ҫ�У�ð������ѡ�����򣬲������򣬹鲢���򣬶����򣬿�������ȡ�
 * ��һ���ǷǱȽ�����ʱ�临�Ӷȿ��ԴﵽO(n)����Ҫ�У��������򣬻�������Ͱ����ȡ�
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
	// ��С����ѡ������
	//printf("Before Selection Sort...\n");
	//PrintArray(iArray, iLength);
	//SelectionSort(iArray, iLength);
	//printf("After Selection Sort...\n");
	//PrintArray(iArray, iLength);

	// ��С�����������
	//printf("Before Insertion Sort...\n");
	//PrintArray(iArray, iLength);
	//InsertionSort(iArray, iLength);
	//printf("After Insertion Sort...\n");
	//PrintArray(iArray, iLength);

	// ��С��������
	//printf("Before Dichotomy Insertion Sort...\n");
	//PrintArray(iArray, iLength);
	//DichotomyInsertionSort(iArray, iLength);
	//printf("After Dichotomy Insertion Sort...\n");
	//PrintArray(iArray, iLength);

	// ��С��������
	//printf("Before Shell Sort...\n");
	//PrintArray(iArray, iLength);
	//ShellSort(iArray, iLength);
	//printf("After Shell Sort...\n");
	//PrintArray(iArray, iLength);


	//int A1[] = { 6, 5, 3, 1, 8, 7, 2, 4 };      // ��С����鲢����
	//int A2[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
	//int n1 = sizeof(A1) / sizeof(int);
	//int n2 = sizeof(A2) / sizeof(int);
	//MergeSortRecursion(A1, 0, n1 - 1);          // �ݹ�ʵ��
	//MergeSortIteration(A2, n2);                 // �ǵݹ�ʵ��
	//printf("�ݹ�ʵ�ֵĹ鲢��������");
	//for (int i = 0; i < n1; i++)
	//{
	//	printf("%d ", A1[i]);
	//}
	//printf("\n");
	//printf("�ǵݹ�ʵ�ֵĹ鲢��������");
	//for (int i = 0; i < n2; i++)
	//{
	//	printf("%d ", A2[i]);
	//}

	//int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 };// ��С���������
	//int n = sizeof(A) / sizeof(int);
	//HeapSort(A, n);
	//printf("����������");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", A[i]);
	//}
	//printf("\n");

	int A[] = { 5, 2, 9, 4, 7, 6, 1, 3, 8 }; // ��С�����������
	int n = sizeof(A) / sizeof(int);
	QuickSort(A, 0, n - 1);
	printf("������������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");


	getchar();
	return 0;
}



