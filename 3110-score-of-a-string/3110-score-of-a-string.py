class Solution:
    def scoreOfString(self, s: str) -> int:
        sum = 0
        l = len(s)
        for i in range(0, l-1):
            diff = abs(ord(s[i+1])-ord(s[i]))
            sum += diff
        return sum