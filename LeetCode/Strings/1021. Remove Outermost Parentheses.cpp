class Solution {
public:
    string removeOuterParentheses(string s) {        
        int n = s.length();
        int count = 0;
        string ans = "";
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                count++;
                if(count > 1) ans += s[i];
            }
            else{
                count--;
                if(count > 0) ans += s[i];
            }
        }
        
        return ans;
    }
};
