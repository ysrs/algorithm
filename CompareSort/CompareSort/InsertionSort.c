#include "InsertionSort.h"


void InsertionSort(int iArray[], int iLength)
{
	for (int i=1; i<iLength; ++i)
	{
		// ����һ��Ԫ�أ�һ���ƣ�
		int iNewElem = iArray[i];

		// Ҫ����λ�õ�����
		int iIndexOfInsert = i;
		while (iIndexOfInsert > 0 && iArray[iIndexOfInsert - 1] > iNewElem)
		{
			iArray[iIndexOfInsert] = iArray[iIndexOfInsert - 1];
			--iIndexOfInsert;
		}

		iArray[iIndexOfInsert] = iNewElem;
	}
}


