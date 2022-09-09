class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        ans = s.split();
        return len(ans[-1])
