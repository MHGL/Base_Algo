// 基本算法-冒泡排序
// 基本思路-相邻对比，大者往右，第一次迭代结束，最后一个值应为数组最大值；数组长度-1，下一轮迭代
// 创建时间-2021/08/01

# include <iostream>
# include <vector>


void printArray(std::vector<int>& array)
{
	std::cout << "Array = ";
	for(int i = 0; i < array.size(); i++)
		std::cout << array[i] << '\t';
	std::cout << std::endl;
}

void swap(std::vector<int> &array, unsigned int i, unsigned int j)
{
	int temp = array[j];
	array[j] = array[i];
	array[i] = temp;
}

void bubbleSort(std::vector<int> &array)
{
	int iter = array.size() - 1;
	for(int i=0; i < iter; i++)
	{
		if(array[i] > array[i + 1])
			swap(array, i, i+1);
	}
}

int main(void)
{
	std::vector<int> array = {1, 5, 7, 9, 2, 8, 4, 6, -4, 3, 11};
	std::vector<int> res = {};
	printArray(array);

	while(array.size())
	{
		bubbleSort(array);
		res.insert(res.begin(), array[array.size()-1]);
		array.pop_back();
	}
	printArray(res);

	return 0;
}


// 优化方向
// 1. bubbleSort(std::vector<int> &array, int start, int end)
// 2. 递归思路
