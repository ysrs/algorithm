#include "CockTailSort.h"
#include "CommonUtil.h"


void CockTailSort(int iArray[], int iLength)
{
	// 初始化边界
	int iLeft = 0;
	int iRight = iLength - 1;

	while (iLeft < iRight)
	{
		// 前半轮，将最大元素放到后面
		for (int i = iLeft; i<iRight; ++i)
		{
			if (iArray[i] > iArray[i + 1])
			{
				Swap(iArray, i, i + 1);
			}
		}
		--iRight;

		// 后半轮，将最小元素放到前面
		for (int i = iRight; i>iLeft; --i)
		{
			if (iArray[i - 1] > iArray[i])
			{
				Swap(iArray, i - 1, i);
			}
		}
		++iLeft;
	}
}


