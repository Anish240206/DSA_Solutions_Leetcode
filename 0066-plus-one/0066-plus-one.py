class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        l1 = []
        for i in digits:
            l1.append(str(i))
        str1 = ''.join(l1)
        ans = str(eval(str1) + 1)
        digits = []
        for i in range(len(ans)):
            digits.append(int(ans[i]))
        return digits