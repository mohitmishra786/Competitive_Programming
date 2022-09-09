class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0 , j = 0;
        int ans = 0;
        set<int> st;
        // P W W K E W                       
        while(i < s.length() and j < s.length()){
            if(st.find(s[j]) == st.end()){ 
                st.insert(s[j]);
                j++;
                ans = max(ans , j - i);
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        
        return ans;
    }
};
