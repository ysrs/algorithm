#include "InsertionSort.h"


void InsertionSort(int iArray[], int iLength)
{
	for (int i=1; i<iLength; ++i)
	{
		// 新来一个元素（一张牌）
		int iNewElem = iArray[i];

		// 要插入位置的索引
		int iIndexOfInsert = i;
		while (iIndexOfInsert > 0 && iArray[iIndexOfInsert - 1] > iNewElem)
		{
			iArray[iIndexOfInsert] = iArray[iIndexOfInsert - 1];
			--iIndexOfInsert;
		}

		iArray[iIndexOfInsert] = iNewElem;
	}
}


