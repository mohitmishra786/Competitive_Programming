class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c == '(' || c == '{' || c == '[') st.push(c);
            else{
                if(st.empty()) return false;
                if(st.top() != '(' and c == ')') return false;
                if(st.top() != '{' and c == '}') return false;
                if(st.top() != '[' and c == ']') return false;
                st.pop();
            }
        }
        
        return st.empty();
    }
};
