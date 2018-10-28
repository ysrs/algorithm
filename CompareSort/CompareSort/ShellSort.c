#include "ShellSort.h"
#include "CommonUtil.h"


// 这个版本不是太好懂，比较绕
//void ShellSort(int iArray[], int iLength)
//{
//	int h = 0;
//	while (h <= iLength)
//	{
//		h = 3 * h + 1;
//	}
//
//	while (h >= 1)
//	{
//		for (int i = h; i < iLength; i++)
//		{
//			int j = i - h;
//			int get = iArray[i];
//			while (j >= 0 && iArray[j] > get)
//			{
//				iArray[j + h] = iArray[j];
//				j = j - h;
//			}
//			iArray[j + h] = get;
//		}
//		// 递减增量
//		h = (h - 1) / 3;
//	}
//}


//// 这种方式虽然看起来比较容易，但是效率还是不算高
void ShellSort(int iArray[], int iLength)
{
	int iGap = iLength;

	while (iGap > 1)
	{
		int iFlag;
		iGap = iGap / 2;
		do
		{
			iFlag = 0;
			for (int i=0; i<iLength-iGap; ++i)
			{
				int j = i + iGap;
				if (iArray[i] > iArray[j])
				{
					iFlag = 1;
					Swap(iArray, i, j);
				}
			}
		} while (0 != iFlag);
	}
}



// 这种方式既简单又高效
//void ShellSort(int iArray[], int iLength)
//{
//	int iGap = iLength;
//	while (iGap > 1)
//	{
//		iGap = iGap / 2;
//
//		for (int i = iGap; i < iLength; i++)
//		{
//			int j = i - iGap;
//			int iNewElem = iArray[i];
//			while (j >= 0 && iArray[j] > iNewElem)
//			{
//				iArray[j + iGap] = iArray[j];
//				j = j - iGap;
//			}
//			iArray[j + iGap] = iNewElem;
//		}
//	}
//}




