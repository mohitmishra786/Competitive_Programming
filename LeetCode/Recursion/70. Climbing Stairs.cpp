// Brute Force - TLE

class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;
        return climbStairs(n - 1) + climbStairs(n - 2);
    }
};

// Memoization

class Solution {
public:
    int dp[46];
    int solve(int n){
        if(n <= 2) return dp[n] = n;
        if(dp[n] != -1){
            return dp[n];
        }
        return dp[n] = solve(n - 1) + solve(n - 2);
    }
    int climbStairs(int n) {
        memset(dp, -1, sizeof(dp));
        return solve(n);
    }
};