void helper(int i, int n, int k, vector<int> &subset, vector<vector<int>> &ans){
    if(k == 0){
        ans.push_back(subset);
        return;
    }
    
    if(k > (n - i + 1)){
        return;
    }
    
    if(i > n) return;
     
    subset.push_back(i);
    helper(i + 1 , n , k - 1 , subset, ans);
    subset.pop_back();
    helper(i + 1, n , k, subset, ans);
}


vector<vector<int>> combinations(int n, int k)
{
    // Write your code here.
    vector<int> subset;
    vector<vector<int>> ans;
    helper(1, n , k , subset, ans);
    return ans;
}
