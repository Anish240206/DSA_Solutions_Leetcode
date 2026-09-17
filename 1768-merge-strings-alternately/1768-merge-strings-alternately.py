class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        str1 = ''
        n = min(len(word1), len(word2))
        for i in range(n):
            str1 += word1[i]
            str1 += word2[i]
        if (len(word1)>len(word2)):
            str1 += word1[n:]
        else:
            str1 += word2[n:]
        return str1