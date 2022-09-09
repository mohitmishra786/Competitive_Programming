class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        n = len(stones)
        ans = 0
        for i in range(n):
            if(stones[i] in jewels):
                ans += 1
                
        return ans
