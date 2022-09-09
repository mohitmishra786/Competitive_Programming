class Solution {
public:
    string truncateSentence(string s, int k) {
        int count = 0;
        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            if(s[i] == ' ') count++;
            if(count == k){
                s.erase(s.begin() + i , s.end());
                break;
            }
        }
        
        return s;
    }
};
