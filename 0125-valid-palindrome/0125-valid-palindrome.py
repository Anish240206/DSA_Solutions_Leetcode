class Solution:
    def isPalindrome(self, s: str) -> bool:
        str1 = ''
        for char in s:
            if char.isalnum():
                str1 += char.lower()
        return (str1==str1[::-1])