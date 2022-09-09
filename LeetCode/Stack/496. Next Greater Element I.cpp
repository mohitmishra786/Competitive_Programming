class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int,int> mp;
        int num;
        
        int n = nums1.size();
        int m = nums2.size();
        for(int i = 0 ; i < m ; i++){
            int num = nums2[i];
            while(!st.empty() and num > st.top()){
                mp[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        vector<int> ans;
        for(int i = 0 ; i < n ; i++){
            if(mp.find(nums1[i]) != mp.end()){
                ans.push_back(mp[nums1[i]]);
            }
            else ans.push_back(-1);
        }
        
        return ans;
    }
};
