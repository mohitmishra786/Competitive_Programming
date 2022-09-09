class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        int sum = 0 , ans = 0;
        for(int i = 0 ; i < n ; i++){
            s[i] = tolower(s[i]);
            if(i < (n/2)){
                if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
                    ans++;
                }
            }
            else{
                if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
                   sum++;
                } 
            }
        }
        
        if(sum == ans) return true;
        else return false;
    }
};
