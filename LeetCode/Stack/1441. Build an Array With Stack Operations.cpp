class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int j = 1;
        vector<string> ans;
        int k = target.size();
        for(int i = 0 ; i < k ; i++){
            while(j != target[i]){
                j++;
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            ans.push_back("Push");
            j++;
        }
        
        return ans;
    }
};
