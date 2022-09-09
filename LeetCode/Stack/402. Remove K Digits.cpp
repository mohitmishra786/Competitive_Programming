class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if(n == k) return "0";
        stack<char> st;
        
        for(int i = 0 ; i < n ; i++){
            while(k && !st.empty() && int(st.top())>int(num[i])){
                st.pop();
                k--;
            }
            st.push(num[i]);
        } 
        if(k != 0){
            while(k--){
                st.pop();
            }
        }
        
        // 0
        stack<char> ans;
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
        while(ans.top()=='0'&& ans.size()!=1){
            ans.pop();
        }
        string sol = "";
        while(!ans.empty()){
            sol.push_back(ans.top());
            ans.pop();
        }
        
        return sol;
    }
};
