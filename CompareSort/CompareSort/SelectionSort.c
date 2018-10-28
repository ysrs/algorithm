#include "SelectionSort.h"
#include "CommonUtil.h"


void SelectionSort(int iArray[], int iLength)
{
	for (int i=0; i<iLength-1; ++i)
	{
		// i为已排序序列的末尾
		int iIndexOfMinVal = i;

		// 未排序序列
		for (int j=i+1; j<iLength; ++j)
		{
			// 找出未排序序列中的最小值
			if (iArray[j] < iArray[iIndexOfMinVal])
			{
				iIndexOfMinVal = j;
			}
		}

		// 放到已排序序列的末尾，该操作很有可能把稳定性打乱，所以选择排序是不稳定的排序算法
		if (iIndexOfMinVal != i)
		{
			Swap(iArray, iIndexOfMinVal, i);
		}
	}
}


