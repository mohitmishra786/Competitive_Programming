class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n = boxes.length();
        vector<int> ans(n);
        for(int i = 0 ; i < n ; i++){
            
            ans[i] == 0;
            for(int j = 0 ; j < n ; j++){
                if(boxes[j] == '1' and i != j){
                    ans[i] += abs(i - j);
                }
            }
        }
        
        return ans;
    }
};
