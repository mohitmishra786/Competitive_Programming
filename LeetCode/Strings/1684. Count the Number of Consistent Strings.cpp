class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {        
        int count[26] = {0};
        for(int i = 0 ; i < allowed.length() ; i++){
            count[allowed[i] - 'a']++;
        }
        int n = words.size();
        int sol = 0;
        for(int i = 0 ; i < n ; i++){
            bool ans = true;
            for(int j = 0 ; j < words[i].length() ; j++){
                if(count[words[i][j] - 'a'] == 0){
                    ans = false;
                    break;
                }
                
            }
            if(ans) sol++;
        }
        return sol;
    }
};
