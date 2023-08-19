class Solution {
public:
    void solve(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &sol, int start){
        if(target < 0) return;
        if(target == 0){
            ans.push_back(sol);
            return;
        }

        for(int i = start; i < candidates.size(); i++){
            if(i > start && candidates[i] == candidates[i - 1]) continue;
            sol.push_back(candidates[i]);
            solve(candidates, target - candidates[i], ans, sol, i + 1);
            sol.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> sol;
        solve(candidates, target, ans, sol, 0);
        return ans;
    }
};