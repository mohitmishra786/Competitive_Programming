class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        return sum(all(i in allowed for i in x ) for x in words)
