// 基本算法-冒泡排序
// 基本思路-相邻对比，大者往右，第一次迭代结束，最后一个值应为数组最大值；数组长度-1，下一轮迭代
// 创建时间-2021/08/01

# include <sort.h>


void Sort::bubbleSort(std::vector<int>& array)
{
	int n = array.size();

	while(n > 1)
	{
		for(int i = 0; i < n-1; i++)
		{
			if(array[i] > array[i+1])
				swap(array, i, i+1);
		}
		n--;
	}
}


int main(void)
{
	std::vector<int> array = {1, 5, 1, 9, 2, 8, 2, 6, 3, 3, 11};

	Sort S;
	S.printArray(array);

	S.bubbleSort(array);
	S.printArray(array);

	return 0;
}

