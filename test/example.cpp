# include <iostream>
# include <vector>
# include "sort.h"


int main(int argc, char** argv)
{
    std::vector<int> example = {1, 3, 1, 5, 9, 7, 5, 6, 2, 8};
    
    Sort st;
    std::cout << "before sort, the origin array is " << std::endl;
    st.print(example);

    // st.bubbleSort(example);
    // st.selectSort(example);
    // st.dualSelectSort(example);
    st.insertSort(example);
    
    std::cout << "after sort, the array is " << std::endl;
    st.print(example);

    return 0;
}
