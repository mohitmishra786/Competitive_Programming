class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int n = s.length();
        string ans = "";
        
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '('){
                if(st.size() > 0){
                    ans += '(';
                }
                st.push('(');
            }
            else{
                if(st.size() > 1){
                    ans += ')';
                }
                st.pop();
            }
        }
        
        
        return ans;
    }
};
