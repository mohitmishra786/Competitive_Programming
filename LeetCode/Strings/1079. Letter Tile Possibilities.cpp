class Solution {
public:
    int numTilePossibilities(string tiles) {
        int count[26] {};
        int n = tiles.length();
        for(int i = 0 ; i < n ; i++){
            count[tiles[i] - 'A']++;
        }
        int result = 0;
        solver(count , result);
        return result;
    }
    void solver(int count[] , int &result){
        for(int i = 0 ; i < 26 ; ++i){
            if(count[i]){
                count[i]--;
                result++;
                solver(count , result);
                count[i]++;
            }    
        }
    }
};
