class Solution {
public:
    void solve(vector<string> &ans, vector<string> &v, string &digit, string &s, int idx){
        if(idx == digit.size()){
            ans.push_back(s);
            return;
        }

        for(auto i : v[digit[idx] - '0']){
            s.push_back(i);
            solve(ans, v, digit, s, idx + 1);
            s.pop_back();
        }
        return;
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits == "") return ans;
        
        vector<string> v{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string s = "";
        solve(ans, v, digits, s, 0);
        return ans;
    }
};
