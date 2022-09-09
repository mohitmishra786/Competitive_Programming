class Solution {
public:
    bool checkIfPangram(string sentence) {
        char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        int map[26] = {0};
        for(int i = 0 ; i < sentence.length() ; i++){
            map[sentence[i] - 'a']++;
        }
        
        for(int i = 0 ; i < 26 ; i++){
            if(map[alphabet[i] - 'a'] == 0){
                return false;
            }
        }
        return true;
    }
};
