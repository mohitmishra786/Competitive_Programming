class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int n = pushed.size();
        int num;
        int j = 0;
        for(int i = 0 ; i < n ; i++){
            num = pushed[i];
            st.push(num);
            while(st.size() and (st.top() == popped[j])){
                st.pop();
                j++;
            }   
        }
        return st.size()==0;
    }
};
