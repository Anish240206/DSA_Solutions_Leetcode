class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        min_len = 200
        for string in strs:
            if len(string) < min_len:
                min_len = len(string)
        for i in range(min_len, 0, -1):
            flag = 1
            for string in strs:
                if string[0:i] != strs[0][0:i]:
                    flag = 0
                    break
            if flag == 1:
                return strs[0][0:i]
        return ""