class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
       char arr[1000];
        for(int i = 0 ; i < indices.size() ; i++){
            arr[indices[i]] = s[i]; 
        }
        
        string ans = "";
        for(int i = 0 ; i < s.length() ; i++){
            ans += arr[i];
        }
        
        return ans;
    }
};
