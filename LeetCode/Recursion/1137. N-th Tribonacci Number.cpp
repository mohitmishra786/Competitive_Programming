// Brute Force Method - Recursion

class Solution {
public:
    int tribonacci(int n) {
        if(n <= 0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 1;
        }

        return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    }
};


// DP with Memoization

class Solution {
public:
    int dp[40];
    int solve(int n){
        if(n <= 0){
            return dp[n] = 0;
        }
        if(n == 1 or n == 2){
            return dp[n] = 1;
        }
        if(dp[n] != -1){
            return dp[n];
        }

        return dp[n] = solve(n - 1) + solve(n - 2) + solve(n - 3);
    }
    int tribonacci(int n) {
        memset(dp, -1, sizeof(dp));
        int ans = solve(n);
        return ans;
    }
};