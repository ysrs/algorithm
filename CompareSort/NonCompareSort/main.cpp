/*
 * �ο� https://www.cnblogs.com/eniac12/p/5332117.html
 */

#include <stdio.h>
#include <cstdlib>

#include "CountingSort.h"
#include "RadixSort.h"
#include "BucketSort.h"


int main()
{
	//int A[] = { 15, 22, 19, 46, 27, 73, 1, 19, 8 };  // ��Լ���������Ƶ����룬ÿһ��Ԫ�ض���[0,100]�������ظ�Ԫ��
	//int n = sizeof(A) / sizeof(int);
	//CountingSort(A, n);
	//printf("������������");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", A[i]);
	//}
	//printf("\n");


	//int A[] = { 20, 90, 64, 289, 998, 365, 852, 123, 789, 456 };// ��Ի���������Ƶ�����
	//int n = sizeof(A) / sizeof(int);
	//LsdRadixSort(A, n);
	//printf("������������");
	//for (int i = 0; i < n; i++)
	//{
	//	printf("%d ", A[i]);
	//}
	//printf("\n");

	int A[] = { 29, 25, 3, 49, 9, 37, 21, 43 };// ���Ͱ������Ƶ�����
	int n = sizeof(A) / sizeof(int);
	BucketSort(A, n);
	printf("Ͱ��������");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", A[i]);
	}
	printf("\n");


	system("pause");
	return 0;
}



