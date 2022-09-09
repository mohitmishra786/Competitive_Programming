class Solution {
public:
    string sortString(string s) {
        int count[26] = {};
        
        for(int i = 0 ; i < s.length() ; i++){
            ++count[s[i] - 'a'];
        }
        string ans = "";
        while(ans.size() != s.size()){
            for(int i = 0 ; i < 26 ; i++){
                if(count[i] > 0){
                    ans += 'a' + i;
                    count[i]--;
                }
            }
            for(int i = 25 ; i >= 0 ; i--){
                if(count[i] > 0){
                    ans += 'a' + i;
                    count[i]--;
                }
            }
        }
        
        return ans;
    }
};
