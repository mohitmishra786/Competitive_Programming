// [Problem Link](https://leetcode.com/problems/subsets/)

class Solution {
public:
    void helper(vector<int>& nums, int n , vector<vector<int>>& ans, vector<int>& subset){
        if(n < 0){
            ans.push_back(subset);
            return ;
        }
        // take
        subset.push_back(nums[n]);
        n--;
        helper(nums, n , ans, subset);
        // backtracking
        n++;
        subset.pop_back();
        
        // not take
        helper(nums , n - 1 , ans , subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        helper(nums, nums.size() - 1 , ans , subset);
        return ans;
    }
};
