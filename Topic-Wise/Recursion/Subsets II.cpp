#include<bits/stdc++.h>
void helper(int n , int pos , vector<int> &arr, vector<int> &subset, vector<vector<int>> &ans){
    if(pos >= n){
        ans.push_back(subset);
        return ;
    }
    
    subset.push_back(arr[pos]);
    helper(n , pos + 1 , arr , subset, ans);
    subset.pop_back();
    
    while( pos + 1 < n and arr[pos] == arr[pos + 1]) pos++;
    helper(n, pos + 1 , arr , subset, ans);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    vector<int> subset;
    vector<vector<int>> ans;
    sort(arr.begin() , arr.end());
    helper(n , 0 , arr, subset, ans);
    sort(ans.begin() , ans.end());
    return ans;
}
