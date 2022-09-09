class Solution {
public:
    string freqAlphabets(string s) {
        string ans=  "";
        int z;
        for(int i = 0 ;  i < s.length() ; i++){
            if((i + 2 < s.length()) and s[i + 2] == '#'){
                z = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += char(z - 1 + 'a');
                i += 2;
            }
            else{
                ans += char((s[i] - '0') - 1 + 'a');
            }
        }
        
        return ans;
    }
};
