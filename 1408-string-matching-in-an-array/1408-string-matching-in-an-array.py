class Solution:
    def stringMatching(self, words: List[str]) -> List[str]:
        list = []
        for i in words:
            for j in words:
                if ((i!=j) and (i in j)):
                    list.append(i)
                    break
        return list