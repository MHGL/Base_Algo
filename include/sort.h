# include <iostream>
# include <vector>


#ifndef SORT_H
#define SORT_H

class Sort
{
	public:
        void print(std::vector<int>&);

		void bubbleSort(std::vector<int>&);

		void selectSort(std::vector<int>&);
		void dualSelectSort(std::vector<int>&);

		void insertSort(std::vector<int>&);


	private:
		void swap(std::vector<int>&, int, int);
};

#endif
