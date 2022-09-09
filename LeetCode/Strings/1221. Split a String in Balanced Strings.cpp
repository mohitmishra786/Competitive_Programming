class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int L = 0 , R = 0 , count = 0;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == 'L'){
                L++;
            }
            else{
                R++;
            }
            
            if(L == R){
                count++;
            }
        }
        
        return count;
    }
};
