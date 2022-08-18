// Problem Link :- https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        long long int s = 0 , e = x, ans = -1;
        while(s <= e){
            long long int  m = s + (e - s)/2;
            if(m * m == x){
                return m;
            }
            if(m * m < x){
                ans = m;
                s = m + 1;
            }
            else{
                e = m - 1;
            }
        }
        
        return ans;
    }
};