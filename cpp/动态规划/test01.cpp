/*
 * 棋盘格路径问题
 *  - - - - 
 * | | | | |
 *  - - - - 
 * | | | | |
 *  - - - - 
 * | | | | |
 *  - - - - 
 *  每一步只能向右或者向下
 *  求从左上角到右下角共有多少走法
*/

# include <iostream>
# include <vector>


int createDS(int row, int col)
{
    std::vector<std::vector<int>> ds(row, std::vector<int>(col));

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == 0 || j == 0)
                ds[i][j] = 1;
            else
                ds[i][j] = ds[i-1][j] + ds[i][j-1];
        }
    }

    return ds[row-1][col-1];
}

int main(void)
{
    int i = 4, j = 4;

    int t = createDS(i, j);
    std::cout << "checkerboard size: " << i << " x " << j << std::endl;
    std::cout << "there has total " << t << " paths to next corner!" << std::endl;

    return 0;
}
