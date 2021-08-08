// 基本算法-快速排序
// 基本思路-选定标杆，从前往后，从后往前，大者在右，小者在左；左右分治
// 创建时间-2021/08/08

# include "sort.h"


void Sort::quickSort(std::vector<int> &array, int begin; int end)
{
	if(begin >= end)
		return

	int n = array.size();
	int mid = array[n/2];

	while 	
}


int main(void)
{
	std::vector<int> array = {1, 5, 7, 9, 2, 8, 4, 6, -4, 3, 11};
	printArray(array);

	quickSort(array);

	return 0;
}
