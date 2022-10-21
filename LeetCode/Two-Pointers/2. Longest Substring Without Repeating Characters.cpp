class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int end = 0;
        set<int> sub;
        sub.insert(s[0]);
        int ans = 0;
        for(int i = 0 ; i < n ; ++i){
            while(end + 1 < n && !sub.count(s[end + 1])){
                ++end;
                sub.insert(s[end]);
            }
            
            ans = max(ans , end - i + 1);
            sub.erase(s[i]);
        }
        
        return ans;
    }
};
