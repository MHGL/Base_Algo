# include <iostream>
# include <vector>


class Sort
{
	private:
		void swap(std::vector<int>&, int, int);

	public:
		void printArray(std::vector<int>&);

		void bubbleSort(std::vector<int>&);
		void quickSort(std::vector<int>&);
};

void Sort::printArray(std::vector<int>& array)
{
	std::cout << "Array = ";
	for(int i = 0; i < array.size(); i++)
		std::cout << array[i] << '\t';
	std::cout << std::endl;
}

void Sort::swap(std::vector<int>& array, int i, int j)
{
	int temp = array[j];
	array[j] = array[i];
	array[i] = temp;
}
