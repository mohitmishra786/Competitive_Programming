class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> st;
        int n = logs.size();
        
        for(int i = 0 ; i < n ; i++){
            if(logs[i] == "../" ){
                if(!st.empty()){
                    st.pop();
                }
            }
            else if(logs[i] == "./") continue;
            else{
                st.push(logs[i]);
            }
        }
        
        return st.size();
    }
};
