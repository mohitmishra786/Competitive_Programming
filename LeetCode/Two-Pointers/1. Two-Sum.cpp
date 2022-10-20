// Solution using Vector of Pair
// TC is O(n * logn) & SC is O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int,int>> ans(n);
        for(int i = 0 ; i < n ; i++){
            ans[i] = make_pair(nums[i] , i);
        }
        
        sort(ans.begin() , ans.end());
        
        int l = 0 , r = n - 1;
        while(l < r){
            int sum = ans[l].first + ans[r].first;
            if(sum == target) return {ans[l].second , ans[r].second};
            else if(sum < target) l++;
            else r--;
        }
        
        return {};
    }
};


