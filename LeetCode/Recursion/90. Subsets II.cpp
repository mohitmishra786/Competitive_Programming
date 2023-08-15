class Solution {
public:

    void solve(vector<int> &nums, vector<vector<int>> &ans, vector<int> &s, int index){
        ans.push_back(s);

        for(int i = index; i < nums.size(); i++){
            if(i > index && nums[i] == nums[i - 1]) continue;
            s.push_back(nums[i]);
            solve(nums, ans, s, i + 1);
            s.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> s;
        vector<vector<int>> sol;
        sort(nums.begin(), nums.end());
        solve(nums, ans, s, 0);
        return ans;
    }
};