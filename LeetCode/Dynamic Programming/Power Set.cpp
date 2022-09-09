void helper(vector<int> &v , int i , vector<vector<int>> &ans , vector<int> &subset){
    
    if(i == v.size()){
        ans.push_back(subset);
        return ;
    }
    subset.push_back(v[i]);
    helper(v , i + 1 , ans , subset);
    
    subset.pop_back();
    helper(v , i + 1 , ans , subset);
}

vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> ans;
    vector<int> subset;
    helper(v , 0 , ans, subset);
    return ans;
}
