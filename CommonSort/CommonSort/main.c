/*
 * �ο���
 * https://www.cnblogs.com/eniac12/p/5329396.html
 * https://www.jianshu.com/p/42f81846c0fb
 * 
 * ����ͨ����˵�������㷨����ָ�����ڲ������㷨�������ݼ�¼���ڴ��н�������
 * �����㷨����ɷ�Ϊ���֣�
 * һ���ǱȽ�����ʱ�临�Ӷ�O(nlogn) ~ O(n^2)����Ҫ�У�ð������ѡ�����򣬲������򣬹鲢���򣬶����򣬿�������ȡ�
 * ��һ���ǷǱȽ�����ʱ�临�Ӷȿ��ԴﵽO(n)����Ҫ�У��������򣬻�������Ͱ����ȡ�
 */


#include <stdio.h>
#include "CommonUtil.h"
#include "BubbleSort.h"
#include "CockTailSort.h"
#include "SelectionSort.h"


int main()
{
	int iArray[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 };
	int iLength = sizeof(iArray) / sizeof(int);
	// ��С����ѡ������
	printf("Before Selection Sort...\n");
	PrintArray(iArray, iLength);

	SelectionSort(iArray, iLength);

	printf("After Selection Sort...\n");
	PrintArray(iArray, iLength);

	getchar();
	return 0;
}



