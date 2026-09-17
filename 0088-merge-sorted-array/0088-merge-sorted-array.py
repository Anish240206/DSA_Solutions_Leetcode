class Solution:
    def merge(self, nums1: list[int], m: int, nums2: list[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i,j in zip(range(m,m+n),range(0,n)):
            nums1[i] = nums2[j]
        return nums1.sort()