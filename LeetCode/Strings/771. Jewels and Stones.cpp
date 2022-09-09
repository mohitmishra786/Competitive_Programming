class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        int z;
        for(int i = 0 ; i < jewels.length() ; i++){
            z = count(stones.begin() , stones.end() , jewels[i]);
            ans += z;
        }
        
        return ans;
    }
};
