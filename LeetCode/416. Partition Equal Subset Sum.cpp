// Problem Link - https://leetcode.com/problems/partition-equal-subset-sum/

// RECURSION CODE

class Solution {
public:
    bool helper(vector<int>& nums , int n, int sum){
        if(sum == 0) return true;
        if(n == 0) return (sum == nums[0]);
        
        // not take
        bool not_take = helper(nums , n - 1 , sum);
        
        //take
        bool take = false;
        if(nums[n] <= sum) take = helper(nums , n - 1 , sum - nums[n]);
        
        return take || not_take;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        
        if(sum % 2 == 1) return false;
        sum = sum/2;
        return helper(nums , n - 1 , sum);
    }
};

// MEMOIZATION

class Solution {
public:
    bool helper(vector<int>& nums , int n, int sum, vector<vector<int>>& dp){
        if(sum == 0) return true;
        if(n == 0) return (sum == nums[0]);
        
        if(dp[n][sum] != -1) return dp[n][sum];
        // not take
        bool not_take = helper(nums , n - 1 , sum, dp);
        
        //take
        bool take = false;
        if(nums[n] <= sum) take = helper(nums , n - 1 , sum - nums[n], dp);
        
        return dp[n][sum] = take || not_take;
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        
        if(sum % 2 == 1) return false;
        sum = sum/2;
        
        vector<vector<int>> dp(n , vector<int> (sum + 1 , -1));
        return helper(nums , n - 1 , sum, dp);
    }
};

// TABULATION

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        
        if(sum % 2 == 1) return false;
        sum = sum/2;
        
        vector<vector<bool>> dp(n , vector<bool> (sum + 1 , 0));
        
        for(int i = 0 ; i < n ; i++){
            dp[i][0] = true;
        }
        if(nums[0] <= sum) dp[0][nums[0]] = true; 
        
        for(int i = 1 ; i < n ;  i++){
            for(int j = 1 ; j <= sum ; j++){
                // not take
                bool not_take = dp[i - 1][j];
        
                //take
                bool take = false;
                if(nums[i] <= j) take = dp[i - 1][j - nums[i]];
                dp[i][j] = take || not_take;
            }
        }
        return dp[n - 1][sum];
    }
};

// SPACE-OPTIMIZED CODE IN 2-D ARRAY

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        
        if(sum % 2 == 1) return false;
        sum = sum/2;
        
        vector<int> prev(sum + 1 , 0) , cur(sum + 1 , 0);
        
        for(int i = 0 ; i < n ; i++){
            prev[0] = true;
        }
        if(nums[0] <= sum) prev[nums[0]] = true; 
        
        for(int i = 1 ; i < n ;  i++){
            for(int j = 1 ; j <= sum ; j++){
                // not take
                bool not_take = prev[j];
        
                //take
                bool take = false;
                if(nums[i] <= j) take = prev[j - nums[i]];
                cur[j] = take || not_take;
            }
            prev = cur;
        }
        return prev[sum];
    }
};

// SPACE-OPTIMIZED IN 1-D ARRAY

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        
        for(int i = 0 ; i < n ; i++){
            sum += nums[i];
        }
        
        if(sum % 2 == 1) return false;
        sum = sum/2;
        
        vector<int> prev(sum + 1 , 0);
        
        for(int i = 0 ; i < n ; i++){
            prev[0] = true;
        }
        if(nums[0] <= sum) prev[nums[0]] = true; 
        
        for(int i = 1 ; i < n ;  i++){
            for(int j = sum ; j >= 0 ; j--){
                // not take
                bool not_take = prev[j];
        
                //take
                bool take = false;
                if(nums[i] <= j) take = prev[j - nums[i]];
                prev[j] = take || not_take;
            }
        }
        return prev[sum];
    }
};
