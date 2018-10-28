#include "ShellSort.h"
#include "CommonUtil.h"


// ����汾����̫�ö����Ƚ���
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
//		// �ݼ�����
//		h = (h - 1) / 3;
//	}
//}


//// ���ַ�ʽ��Ȼ�������Ƚ����ף�����Ч�ʻ��ǲ����
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



// ���ַ�ʽ�ȼ��ָ�Ч
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




