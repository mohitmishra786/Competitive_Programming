class Solution {
public:
    bool isPalindrome(string& s, int l, int r) {
        while (l < r) {
            if (s[l++] != s[r--]) {
                return false;
            }
        }
        return true;
    }

    void solve(string s, vector<vector<string>> &ans, vector<string> sol, int start){
        if(start >= s.length()){
            ans.push_back(sol);
            return;
        }
        

        for(int i = start; i < s.length(); i++){
            if(isPalindrome(s, start, i)){
                sol.push_back(s.substr(start, i - start + 1));
                solve(s, ans, sol, i + 1);
                sol.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> sol;
        solve(s, ans, sol, 0);    
        return ans;
    }
};