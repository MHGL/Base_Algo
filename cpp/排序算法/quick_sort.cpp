// 基本算法-快速排序
// 基本思路-选定标杆，从前往后，从后往前，大者在右，小者在左；左右分治
// 创建时间-2021/08/08

# include "sort.h"


void Sort::quickSort(std::vector<int> &array, int begin, int end)
{
	if(begin >= end)
		return;

	int i = begin, j = end;
	int benchmark = array.at(begin);

	while(i < j)
	{
		// 必须有一个等号，否则会陷入死循环
		while((i < j) && (array[j] >= benchmark))
			j--;
		// 在这里，array[i]的值以保存到benchmark中，所以直接进行赋值操作
		array[i] = array[j];

		while((i < j) && (array[i] < benchmark))
			i++;
		// 在这里，array[j]的值以保存到上一个array[i]中，所以直接进行赋值操作
		array[j] = array[i];
	}
	array[i] = benchmark;

	quickSort(array, begin, i-1);
	quickSort(array, i+1, end);
}


int main(void)
{
	Sort S;
	std::vector<int> array = {1, 5, 1, 9, 2, 8, 2, 6, 3, 3, 11};
	S.printArray(array);

	int n = array.size() - 1;
	S.quickSort(array, 0, n);
	S.printArray(array);

	return 0;
}
