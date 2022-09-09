#include<bits/stdc++.h>
void perm(vector<int> &arr , int n , int pos , vector<vector<int>> &ans){
    if(pos >= n){
        ans.push_back(arr);
    }
    
    unordered_set<int> m;
    for(int i = pos ; i < n ; i++){
        if(m.find(arr[i]) != m.end()) continue;
        m.insert(arr[i]);
        swap(arr[i] , arr[pos]);
        perm(arr , n , pos + 1 , ans );
        swap(arr[i] , arr[pos]);
    }
}
vector<vector<int> > uniquePermutations(vector<int> &arr, int n) {
	// Write your code here.
    vector<vector<int>> ans;
    perm(arr , n , 0 , ans);
    return ans;
}
