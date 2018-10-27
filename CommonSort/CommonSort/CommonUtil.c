#include "CommonUtil.h"
#include <stdio.h>


void Swap(int iArray[], int iLeftIndex, int iRightIndex)
{
	int iTemp = iArray[iLeftIndex];
	iArray[iLeftIndex] = iArray[iRightIndex];
	iArray[iRightIndex] = iTemp;
}

void PrintArray(int iArray[], int iLength)
{
	for (int i=0; i<iLength; ++i)
	{
		printf("%d ", iArray[i]);
	}
	printf("\n");
}


