class Solution {
    
    bool isSamePattern(string word, string pattern){
        int n = word.length();
        unordered_map<char,char> um;
        vector<bool> visited(26,false);
        for(int i = 0 ; i < n ; i++){
            char a = word[i];
            char b = pattern[i];
            
            if(um[a] != b and um[a]) return false;
            if(!um[a] and visited[b - 'a']) return false;
            um[a] = b;
            visited[b - 'a'] = true;
        }
        
        return true;
    }
    
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {        
        vector<string> ans;
        for(string word : words)
            if(isSamePattern(word,pattern)) ans.emplace_back(word);
        return ans;
    }
};
