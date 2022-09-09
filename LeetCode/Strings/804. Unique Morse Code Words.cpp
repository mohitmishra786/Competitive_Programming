class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> st;
        int n = words.size();
        string ans[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0 ; i < n ; i++){
            string s = "";
            for(int j = 0 ; j < words[i].size() ; j++){
                s += ans[words[i][j] - 'a'];
            }
            
            st.insert(s);
        }
    
        return st.size();
    }
};
