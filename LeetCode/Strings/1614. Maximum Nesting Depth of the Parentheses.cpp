class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int ans = 0;
        int sol = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                ans++;
                sol = max(ans , sol);
            }
            if(s[i] == ')') ans--;
        }
        return sol;
    }
};
