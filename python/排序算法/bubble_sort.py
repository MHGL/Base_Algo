# -*- coding:utf-8 -*-
# 基本算法-冒泡排序
# 基本思路-相邻对比，大者往右，第一次迭代结束，最后一个值应为数组最大值；数组长度-1，下一轮迭代
# 创建时间-2021/07/30


class BubbleSort(object):
    def __init__(self, array):
        assert isinstance(array, list), "only support array type list now!"
        assert len(array) > 1, "only support array length > 1 now!"
        assert all([isinstance(i, (int, float)) for i in array]), "only support array ele type int or float now!"

        self.array = array

    def __call__(self):
        res = []
        while self.array:
            self._sort(self.array)
            res += self.array[-1:]
            self.array.pop()
        return res[::-1]
            
    @staticmethod
    def _sort(array):
        for i in range(len(array) - 1):
            if array[i] <= array[i + 1]:
                continue
            array[i], array[i + 1] = array[i + 1], array[i]


if __name__ == "__main__":
    array = [1, 3, 9, 5, 2, 4, 7, 6, 1.1]
    res = BubbleSort(array)()
    print(res)
