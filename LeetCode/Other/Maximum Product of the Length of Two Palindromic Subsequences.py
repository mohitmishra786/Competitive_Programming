class Solution:
    def maxProduct(self, s: str) -> int:
        n , pal = len(s) , { }
        for mask in range(1 << n):
            subseq = ""
            for i in range(n):
                if (mask & (1 << i)):
                    subseq +=  s[i]
            
            
            if subseq == subseq[::-1]:
                pal[mask] = len(subseq)
        ans = 0
        for a in pal:
            for b in pal:
                if(a & b == 0):
                    ans = max(ans , pal[a] * pal[b])
        return ans
