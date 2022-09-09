// ANOTHER WAY OF SOLVING POWER SET

vector<vector<int>> helper(vector<int> &v , int i){
    
    // Base Condition
    if(i == v.size()){
        return {{}};
    }
    
    //Recursive Call
    vector<vector<int>> partialans = helper(v , i + 1);
    vector<vector<int>> ans;
    for(vector<int> x : partialans){
        ans.push_back(x);
    }
    for(vector<int> x : partialans){
        vector<int> temp;
        temp.push_back(v[i]);
        for(int y : x){
            temp.push_back(y);
        }
        ans.push_back(temp);
    }
    
    return ans;
    
}

vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    return helper(v , 0);
}
