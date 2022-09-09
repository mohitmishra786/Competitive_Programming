class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin() , strs.end());
        string a = strs[0];
        string b = strs[n - 1];
        
        string ans =  "";
        for(int i = 0 ; i < a.length() ; i++){
            if(a[i] == b[i]){
                ans = ans + a[i];
            }
            else{
                return ans;
            }
        }
        
        return ans;
    }
};
