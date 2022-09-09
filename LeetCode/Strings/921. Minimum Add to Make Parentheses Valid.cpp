class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;
        int ans = 0 , nota = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(') ans++;
            else if(ans > 0) ans--;
            else{
                nota++;
            }
        }
        return nota + ans;
   
    }
};
