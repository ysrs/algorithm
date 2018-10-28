#include "SelectionSort.h"
#include "CommonUtil.h"


void SelectionSort(int iArray[], int iLength)
{
	for (int i=0; i<iLength-1; ++i)
	{
		// iΪ���������е�ĩβ
		int iIndexOfMinVal = i;

		// δ��������
		for (int j=i+1; j<iLength; ++j)
		{
			// �ҳ�δ���������е���Сֵ
			if (iArray[j] < iArray[iIndexOfMinVal])
			{
				iIndexOfMinVal = j;
			}
		}

		// �ŵ����������е�ĩβ���ò������п��ܰ��ȶ��Դ��ң�����ѡ�������ǲ��ȶ��������㷨
		if (iIndexOfMinVal != i)
		{
			Swap(iArray, iIndexOfMinVal, i);
		}
	}
}


