class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        nums.resize(2*n);
        for(int i = n ; i < 2 * n ; i++){
            nums[i] = nums[i - n];
        }
        
        vector<int> ans(n , -1);
        stack<int> st;
        
        int num;
        for(int i = 0 ; i < 2 * n ; i++){
            num = nums[i];
            
            
            while(!st.empty() and num > nums[st.top()] ){
                if(st.top() >= n){
                    st.top() = st.top() - n;
                }
                
                ans[st.top()] = num;
                st.pop();
            }
            
            st.push(i);
        }
        
        return ans;
    }
};
