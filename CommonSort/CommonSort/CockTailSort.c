#include "CockTailSort.h"
#include "CommonUtil.h"


void CockTailSort(int iArray[], int iLength)
{
	// ��ʼ���߽�
	int iLeft = 0;
	int iRight = iLength - 1;

	while (iLeft < iRight)
	{
		// ǰ���֣������Ԫ�طŵ�����
		for (int i = iLeft; i<iRight; ++i)
		{
			if (iArray[i] > iArray[i + 1])
			{
				Swap(iArray, i, i + 1);
			}
		}
		--iRight;

		// ����֣�����СԪ�طŵ�ǰ��
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


