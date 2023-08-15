class Solution {
public:
    void solve(vector<string> &ans, int left, int right, int n,string s){
        if(s.length() == 2 * n){
            ans.push_back(s);
            return;
        }

        if(left < n) solve(ans, left + 1, right, n, s + "(");
        if(right < left) solve(ans, left, right + 1, n , s + ")");
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(ans, 0, 0, n, "");
        return ans;
    }
};