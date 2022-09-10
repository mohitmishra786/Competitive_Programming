// Tabulation Code

int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    
    int k = sum;
    vector<vector<bool>> dp(n , vector<bool> (k + 1 , 0));
    for(int i = 0 ; i < n ; i++){
        dp[i][0] = true;
    }
    if(arr[0] <= k) dp[0][arr[0]] = true;
    
    for(int i = 1 ; i < n ; i++){
        for(int tar = 1 ; tar <= sum; tar++){
            bool not_take = dp[i - 1][tar];
            bool take = false;
            if(tar >= arr[i]) take = dp[i - 1][tar - arr[i]];
            dp[i][tar] = take || not_take;
        }
    }
    
    int mini = 1e9;
    for(int i = 0 ; i <= sum/2 ; i++){
        if(dp[n - 1][i]){
            mini = min(mini , sum - 2 * i);
        }
    }
    return mini;
}

// Space Optimized with 2-D Array



int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    
    int k = sum;
    vector<int> prev(k + 1 , 0), cur(k + 1 , 0);
    prev[0] = cur[0] = true;
    if(arr[0] <= k) prev[arr[0]] = true;
    
    for(int i = 1 ; i < n ; i++){
        for(int tar = 1 ; tar <= sum; tar++){
            bool not_take = prev[tar];
            bool take = false;
            if(tar >= arr[i]) take = prev[tar - arr[i]];
            cur[tar] = take || not_take;
        }
        prev = cur;
    }
    
    int mini = (int) 1e9;
    for(int i = 0 ; i <= sum/2 ; i++){
        if(prev[i]){
            mini = min(mini , sum - 2 * i);
        }
    }
    return mini;
}

// Space Optimized With 1-D Array



int minSubsetSumDifference(vector<int>& arr, int n)
{
	// Write your code here.
    int sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
    }
    
    int k = sum;
    vector<int> prev(k + 1 , 0);
    prev[0] = true;
    if(arr[0] <= k) prev[arr[0]] = true;
    
    for(int i = 1 ; i < n ; i++){
        for(int tar = sum ; tar >= 0; tar--){
            bool not_take = prev[tar];
            bool take = false;
            if(tar >= arr[i]) take = prev[tar - arr[i]];
            prev[tar] = take || not_take;
        }
    }
    
    int mini = (int) 1e9;
    for(int i = 0 ; i <= sum/2 ; i++){
        if(prev[i]){
            mini = min(mini , sum - 2 * i);
        }
    }
    return mini;
}
