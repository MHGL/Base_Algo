# -*- coding:utf-8 -*-
# 基本算法-快速排序
# 基本思路-选定标杆，从前往后，从后往前，大者在右，小者在左；左右分治
# 创建时间-2021/08/01


class QuickSort(object):
    def __init__(self, array):
        assert isinstance(array, list), "only support array type list now!"
        assert len(array) > 1, "only support array length > 1 now!"
        assert all([isinstance(i, (int, float)) for i in array]), "only support array ele type int or float now!"

        self.array = array

    def __call__(self):
        return QuickSort._sort(self.array)

    @staticmethod
    def _sort(array):
        if len(array) < 2:
            return array
        left, right = [], []
        mid = array[len(array)//2]
        array.remove(mid)

        for x in array:
            if x < mid:
                left.append(x)
            else:
                right.append(x)
        return QuickSort._sort(left) + [mid] + QuickSort._sort(right)


if __name__ == "__main__":
    array = [1, 3, 9, 5, 2, 4, 7, 6, 1.1]
    res = QuickSort(array)()
    print(res)
