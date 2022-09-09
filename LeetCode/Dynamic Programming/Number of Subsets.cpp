// Problem Link :- https://www.codingninjas.com/codestudio/problems/number-of-subsets_3952532?leftPanelTab=1

// Recursion

int helper(vector<int>& nums, int tar , int n){
    if(tar == 0) return 1;
    if(n == 0){
        if(nums[0] == tar) return 1;
        else return 0;
    }
    
    int not_take = helper(nums , tar , n - 1);
    int take = 0;
    take = helper(nums , tar - nums[n] , n - 1);
    
    return take + not_take;
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here
    int n = num.size();
    return helper(num , tar , n - 1);
}

// Memoization

int helper(vector<int>& nums, int tar , int n, vector<vector<int>>& dp){
    if(n == -1){
        if(tar == 0) return 1;
        return 0;
    }
    if(dp[n][tar] != -1) return dp[n][tar];
    int not_take = helper(nums , tar , n - 1, dp);
    int take = 0;
    if(nums[n] <= tar) take = helper(nums , tar - nums[n] , n - 1, dp);
    
    return dp[n][tar] =  take + not_take;
}
int findWays(vector<int> &num, int tar)
{
    // Write your code here
    int n = num.size();
    vector<vector<int>> dp(n , vector<int> (tar + 1 , -1));
    return helper(num , tar , n - 1, dp);
}

// Tabulation

int findWays(vector<int> &num, int tar)
{
    // Write your code here
    int n = num.size();
    vector<vector<int>> dp(n , vector<int> (tar + 1 , 0));
    if(num[0] == 0){
        // We will have 2 option, either we can take 0 with or not take it as 
        // with both option total summation will not change
        dp[0][0] = 2;
    }
    else dp[0][0] = 1;
    
    if(num[0] <= tar && num[0] != 0) dp[0][num[0]] = 1;
    for(int i = 1; i < n ; i++){
        for(int sum = 0; sum <= tar; sum++){
            int not_take = dp[i - 1][sum];
            int take = 0;
            if(num[i] <= sum) take = dp[i - 1][sum - num[i]];
            dp[i][sum] = take + not_take;
        }
    }
    return dp[n - 1][tar];
}

// Space-Optimized in 2-D Array

int findWays(vector<int> &num, int tar)
{
    // Write your code here
    int n = num.size();
    vector<int> prev(tar + 1 , 0), cur(tar + 1 , 0);
    if(num[0] == 0){
        // We will have 2 option, either we can take 0 with or not take it as 
        // with both option total summation will not change
        prev[0] = 2;
    }
    else prev[0] = 1;
    
    if(num[0] <= tar && num[0] != 0) prev[num[0]] = 1;
    for(int i = 1; i < n ; i++){
        for(int sum = 0; sum <= tar; sum++){
            int not_take = prev[sum];
            int take = 0;
            if(num[i] <= sum) take = prev[sum - num[i]];
           cur[sum] = take + not_take;
        }
        prev = cur;
    }
    return prev[tar];
}

// Space-Optimized in 1-D Array

int findWays(vector<int> &num, int tar)
{
    // Write your code here
    int n = num.size();
    vector<int> prev(tar + 1 , 0);
    if(num[0] == 0){
        // We will have 2 option, either we can take 0 with or not take it as 
        // with both option total summation will not change
        prev[0] = 2;
    }
    else prev[0] = 1;
    
    if(num[0] <= tar && num[0] != 0) prev[num[0]] = 1;
    for(int i = 1; i < n ; i++){
        for(int sum = tar; sum >= 0; sum--){
            int not_take = prev[sum];
            int take = 0;
            if(num[i] <= sum) take = prev[sum - num[i]];
            prev[sum] = take + not_take;
        }
    }
    return prev[tar];
}
