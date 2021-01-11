#include <iostream>
#include <vector>

using namespace std; 


int Partition(vector<int> data, int start,  int end )
// �Ե�һ���� x Ϊ��׼��ǰ�������xС�����������x�� ���дֲڵ����� 
{
	if (data.empty()) 
	{	
		//throw exception("Empty data"); 
		printf("data Ϊ�ա�"); 
		return -1; 
	}
	
	int low = start; 
	int high = end;
	int base = data[start]; 
	while (low < high)
	{
		while (data[high] >= base)
		{
			high--; 
		}
		if (low < high)
		{
			data[low] = data[high]; 
		}
		while (data[low] < base)
		{
			low++; 
		}
		if (low < high)
		{
			data[high] = data[low]; 
		}

	}
	data[low] = base; 

	return  low ; 

}

