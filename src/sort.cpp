# include <vector>
# include "sort.h"


void Sort::bubbleSort(std::vector<int>& array)
{
	int size = array.size();
	if(size <= 1)
		return;

	for(int i = 0; i < size; i++)
	{
		bool is_swap = false;
		for(int j = 1; j < size - i; j++)
		{
			if(array[j-1] > array[j])
			{
			       Sort::swap(array, j-1, j);
			       is_swap = true;
			}
		}

		// if swap operator not happened, means the array is finish sorted!
		if(!is_swap)
			break;
	}
}	


void Sort::selectSort(std::vector<int>& array)
{
	int size = array.size();
	if(size <= 1)
		return;

	for(int i = 0; i < size; i++)
	{
		int minIdx = i;
		for(int j = i + 1; j < size; j++)
		{
			if(array[j] < array[minIdx])
				minIdx = j;
		}

		Sort::swap(array, i, minIdx);
	}
}


void Sort::dualSelectSort(std::vector<int>& array)
{
	int size = array.size();
	if(size <= 1)
		return;

	for(int i = 0; i < size / 2; i++)
	{
		int minIdx = i;
		int maxIdx = i;
		for(int j = i + 1; j < size - i; j++)
		{
			if(array[j] < array[minIdx])
				minIdx = j;
			if(array[j] > array[maxIdx])
				maxIdx = j;
		}

		// index == size / 2
		if(minIdx == maxIdx)
			break;

		Sort::swap(array, i, minIdx);
		if(maxIdx == i)
			maxIdx = minIdx;
		Sort::swap(array, size - i - 1, maxIdx);
	}
}


void Sort::insertSort(std::vector<int>& array)
{
	int size = array.size();
	if(size <= 1)
		return;

	for(int i = 1; i < size; i++)
	{
		int j = i - 1;
		int cur = array[i];
        // elements which bigger than cur will move back
		while(j >= 0 && array[j] > cur)
		{
            array[j+1] = array[j];
			j--;
		}

		array[j+1] = cur;
	}
}


void Sort::swap(std::vector<int>& array, int i, int j)
{
    int size = array.size();

    if(i < 0 || i >= size)
        return;
    if(j < 0 || j >= size)
        return;

    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}


void Sort::print(std::vector<int>& array)
{
    for(const int x: array)
        std::cout << x << '\t';
    std::cout << std::endl;
}

