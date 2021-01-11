#include <vector>
#include <iostream> 
#include "quicksort.h"
using namespace std; 
// ��cpp�ļ��а���.h�ļ���Ҫô��Ҫ�õ����ͷ�ļ��еĺ��������࣬Ҫô����ʵ�����ͷ�ļ���
//h-- - ����Ϊ�˷�һ�������������Ķ�����
//����Ƕ������.h�С�     ���.h���ظ�������Σ���ô��ᱻ���ض��塣


int partition(vector<int> &nums, int l, int r)
{

	int pivot = nums[l]; 

	while (l < r)
	{
		while (l<r && nums[r]>=pivot) r--; 
		if (l < r)  // �ҵ�һ�� С�ڻ�׼ֵ����  ����ŵ���� 
		{
			nums[l] = nums[r]; 
		}
		while (l < r && nums[l] < pivot) l++; 
		if (l < r)  // �ҵ�һ�� ���ڻ�׼ֵ����  ��������ұ� 
		{
			nums[r] = nums[l]; 
		}
	}
	// l = r ʱ����ѭ�� 
	cout << "l=" << l
		<< "r=" << r << endl; 
	nums[l] = pivot;  // ��ʱl��r���� ������һ����pivot���Ҳ������һ����pivotС�ģ�����һ����������ͬ������
	// ����׼ֵ���²�����ֵ��
	return l; 
}

void quick_sort(vector<int>& nums, int l, int r)
{
	if (l < r)
	{
		int pos = partition(nums, l, r); 
		quick_sort(nums, l, pos-1); 
		quick_sort(nums, pos+1, r); 
	}

}