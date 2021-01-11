#include <iostream>
#include <vector>

using namespace std; 


int Partition(vector<int> data, int start,  int end )
// 以第一个数 x 为基准，前面的数比x小，后面的数比x大 进行粗糙的排序 
{
	if (data.empty()) 
	{	
		//throw exception("Empty data"); 
		printf("data 为空。"); 
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

