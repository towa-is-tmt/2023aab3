class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): #長度不一樣
            return False #失敗
        d = {}
        for c in s:
            if c in d:
                d[c] = d[c] + 1
            else: