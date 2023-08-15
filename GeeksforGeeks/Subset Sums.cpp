/*
    Question Link:- https://practice.geeksforgeeks.org/problems/subset-sums2234/1
*/

class Solution{
    public:

    void solve(vector<int> &arr, int N, vector<int> &ans, int sum, int index){
        if(index >= N){
            ans.push_back(sum);
            return;
        }
        
        // take element
        sum += arr[index];
        solve(arr, N, ans, sum, index + 1);
        sum -= arr[index];
        
        // not take element
        solve(arr, N, ans, sum, index + 1);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        int sum = 0;
        solve(arr, N, ans, sum, 0);
        return ans;
    }
};