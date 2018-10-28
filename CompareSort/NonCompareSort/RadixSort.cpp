#include "RadixSort.h"
#include <cstdlib>

static const int dn = 3;                // �������Ԫ��Ϊ��λ��������
static const int k = 10;                // ����Ϊ10��ÿһλ�����ֶ���[0,9]�ڵ�����
static int C[k];

// ���Ԫ��x�ĵ�dλ����
static int GetDigit(int x, int d)
{
	// ���Ϊ��λ������������ֻҪ����λ��������
	int radix[] = { 1, 1, 10, 100 };
	return (x / radix[d]) % 10;
}


// ����Ԫ�صĵ�dλ���֣���A������м�������
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
		int dight = GetDigit(A[i], d);  // Ԫ��A[i]��ǰλ����Ϊdight   
		B[--C[dight]] = A[i];           // ���ݵ�ǰλ���֣���ÿ��Ԫ��A[i]�ŵ������������B�е���ȷλ����
										// ����������ǰλ����ͬΪdight��Ԫ��ʱ���Ὣ����ڵ�ǰԪ�ص�ǰһ��λ���ϱ�֤����������ȶ���
	}
	for (int i = 0; i < n; i++)
	{
		A[i] = B[i];
	}

	free(B);
}

void LsdRadixSort(int A[], int n)
{
	// �ӵ�λ����λ
	for (int d = 1; d <= dn; d++)
	{
		// ���ݵ�dλ���ֶ�A���м�������
		CountingSort(A, n, d);
	}
}


