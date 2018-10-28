#include "DichotomyInsertionSort.h"


void DichotomyInsertionSort(int iArray[], int iLength)
{
	for (int i=1; i<iLength; ++i)
	{
		int iIndexOfLeft = 0;
		int iIndexOfRight = i - 1;
		int iNewElem = iArray[i];
		while (iIndexOfLeft <= iIndexOfRight)
		{
			int iIndexOfMiddle = (iIndexOfLeft + iIndexOfRight) / 2;
			if (iArray[iIndexOfMiddle] > iNewElem)
			{
				iIndexOfRight = iIndexOfMiddle - 1;
			}
			else
			{
				iIndexOfLeft = iIndexOfMiddle + 1;
			}
		}

		for (int j=i-1; j>=iIndexOfLeft; --j)
		{
			iArray[j + 1] = iArray[j];
		}

		iArray[iIndexOfLeft] = iNewElem;
	}
}

