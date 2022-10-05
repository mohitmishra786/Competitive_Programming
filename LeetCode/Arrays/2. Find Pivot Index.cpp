class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0 , temp = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            total += nums[i];
        }
        
        for(int i = 0 ; i < n ; i++){
            if(total - (temp + nums[i]) == temp) return i;
            temp += nums[i];
        }
        
        return -1;
    }
};
