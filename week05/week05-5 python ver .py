class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        a = s.split()
        return len(s[-1])