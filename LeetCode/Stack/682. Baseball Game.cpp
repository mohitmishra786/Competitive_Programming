class Solution {
public:
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        stack<int> st;
        int x , sum;
        for(int i = 0 ; i < n ; i++){
            if(ops[i] == "C"){
                st.pop();
            }
            else if(ops[i] == "D"){
                x = st.top();
                st.push(x * 2);
            }
            else if(ops[i] == "+"){
                x = st.top();
                st.pop();
                sum = x + st.top();
                st.push(x);
                st.push(sum);
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        
        int sol = 0;
        while(!st.empty()){
            sol += st.top();
            st.pop();
        }
        
        return sol;
    }
};
