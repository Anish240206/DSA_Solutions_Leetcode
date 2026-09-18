class Solution:
    def firstPalindrome(self, words: list[str]) -> str:
        string = ''
        for str1 in words:
            if str1==str1[::-1]:
                string = str1
                break
        return string