#include "BubbleSort.h"
#include "CommonUtil.h"


void BubbleSort(int iArray[], int iLength)
{
	for (int i = 0; i<iLength - 1; ++i)
	{
		for (int j = 0; j<iLength - 1 - i; ++j)
		{
			if (iArray[j] > iArray[j + 1])
			{
				Swap(iArray, j, j + 1);
			}
		}
	}
}

