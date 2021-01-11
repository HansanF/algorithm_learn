#include <vector>
#include <iostream> 
#include "quicksort.h"
using namespace std; 
// 在cpp文件中包含.h文件，要么你要用到这个头文件中的函数或者类，要么就是实现这个头文件；
//h-- - 就是为了放一堆声明所产生的东西。
//如果是定义放在.h中。     如果.h被重复包含多次，那么则会被报重定义。


int partition(vector<int> &nums, int l, int r)
{

	int pivot = nums[l]; 

	while (l < r)
	{
		while (l<r && nums[r]>=pivot) r--; 
		if (l < r)  // 找到一个 小于基准值的数  把其放到左边 
		{
			nums[l] = nums[r]; 
		}
		while (l < r && nums[l] < pivot) l++; 
		if (l < r)  // 找到一个 大于基准值的数  把其放在右边 
		{
			nums[r] = nums[l]; 
		}
	}
	// l = r 时跳出循环 
	cout << "l=" << l
		<< "r=" << r << endl; 
	nums[l] = pivot;  // 此时l（r）处 可能是一个比pivot大的也可能是一个比pivot小的，但是一定存在两个同样的它
	// 将基准值重新插入数值中
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