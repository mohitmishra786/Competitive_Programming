class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int count = 0;
        int t = n - 1;
        for(int i = n -1 ; i >= 0 ; i--){
            if(s[t] != ' '){
               if(s[i] != ' '){
                    count++;
                }
                else if(s[i] == ' '){
                    break;
                }
            }
            else{
                t--;
                continue;
            }
        }
        
        return count;
    }
};
