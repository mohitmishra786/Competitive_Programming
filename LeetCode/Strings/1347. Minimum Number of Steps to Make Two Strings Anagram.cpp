class Solution {
public:
    int minSteps(string s, string t) {
        int count[26] = {0};
        int sum[26]= {0};
        
        int n = s.length();
        for(int i = 0 ; i < n ; i++){
            count[s[i] - 'a']++;
        }
        
        for(int i = 0 ; i < n ; i++){
            sum[t[i] - 'a']++;
        }
        
        int sol = 0;
        for(int i = 0 ; i < 26 ; i++){
            sol += abs(count[i] - sum[i]);
        }
        if(sol % 2 == 0) return sol/2;
        return sol/2 + 1;
    }
};
