class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split(' ')
        rev = []
        for w in words:
            rev.append(w[::-1])
        return ' '.join(rev)