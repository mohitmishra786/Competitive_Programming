// Recursion

bool helper(int n, int k , vector<int>& arr, vector<bool>& dp){
    if(k == 0) return true;
    if(n == 0){
        return (arr[0] == k);
    }
    if(dp[k] != false) return dp[k];
    bool not_take = helper(n - 1 , k , arr, dp);
    bool take = false;
    if(k >= arr[n]) take = helper(n - 1 , k - arr[n] , arr, dp);
    
    return dp[k] = take || not_take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<bool> dp(k , false);
    return helper(n - 1 , k , arr, dp);
}


// Memoization

bool helper(int n, int k , vector<int>& arr, vector<vector<int>> &dp){
    if(k == 0) return true;
    if(n == 0){
        return (arr[0] == k);
    }
    if(dp[n][k] != -1) return dp[n][k];
    bool not_take = helper(n - 1 , k , arr, dp);
    bool take = false;
    if(k >= arr[n]) take = helper(n - 1 , k - arr[n] , arr, dp);
    
    return dp[n][k] = take || not_take;
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<int>> dp(n , vector<int> (k + 1 , -1));
    return helper(n - 1 , k , arr, dp);
}


// Tabulation


bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<vector<bool>> dp(n , vector<bool> (k + 1 , 0));
    
    for(int i = 0 ; i < n ; i++) dp[i][0] = true;
    if(arr[0] <= k) dp[0][arr[0]] = true;
    
    for(int i = 1 ; i < n ; i++){
        for(int target = 1 ; target <= k ; target++){
                bool not_take = dp[i - 1][target];
                bool take = false;
                if(target >= arr[i]) take = dp[i - 1][target - arr[i]];
                dp[i][target] = take || not_take;
        }
    }
    
    return dp[n - 1][k];
    
}


// Space-Optimized Code

bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    vector<bool> prev(k + 1 , 0), cur(k + 1 , 0);
    prev[0] = cur[0] = true;
    if(arr[0] <= k) prev[arr[0]] = true;
    
    for(int i = 1 ; i < n ; i++){
        for(int sum = 1 ; sum <= k ; sum++){
            bool not_take = prev[sum];
            bool take = false;
            if(arr[i] <= sum) take = prev[sum - arr[i]];
            cur[sum] = take || not_take;
        }
        prev = cur;
    }
    return prev[k];
    
}
