// Problem Link :- https://leetcode.com/problems/longest-consecutive-sequence/



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i = 0 ; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        vector<int> ans;
        for(auto m : s){
            ans.push_back(m);
        }
        
        int maxi = 0;
        int p = 0;
        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i] - ans[i - 1] == 1){
                p++;
            }
            else{
                maxi = max(maxi, p);
                p = 0;
            }
        }
        
        maxi = max(maxi, p);
        if(nums.size() == 0) return 0;
        return maxi + 1;
    }
};


// Un_Ordered Set O(N)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        int ans = 1;
        if(nums.size() == 0) return 0;
        for(int m : nums){
            s.erase(m);
            int prev = m - 1;
            int next = m + 1;
            while(s.find(prev) != s.end()) s.erase(prev--);
            while(s.find(next) != s.end()) s.erase(next++);
            ans = max(ans , next - prev - 1);
        }
        
        return ans;
    }
};