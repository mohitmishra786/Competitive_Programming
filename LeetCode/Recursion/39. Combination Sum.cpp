class Solution {
public:

    void solve(vector<int> &candidates, int target, int sum, vector<vector<int>> &ans, vector<int> &sol, int i){
        if(sum == target){
            ans.push_back(sol);
            return;
        }
        if(i == candidates.size() or sum > target){
            return;
        }

        sol.push_back(candidates[i]);
        solve(candidates, target, sum + candidates[i], ans, sol, i);
        sol.pop_back();


        solve(candidates, target, sum, ans, sol, i + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> sol;
        int sum = 0;
        solve(candidates, target, sum, ans, sol, 0);
        return ans;
    }
};