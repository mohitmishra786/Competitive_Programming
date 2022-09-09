#include<bits/stdc++.h>
void perm(string &str , int pos , vector<string> &ans){
    if(pos >= str.size()){
        ans.push_back(str);
    }
    
    for(int i = pos ; i < str.size() ; i++){
        swap(str[i] ,str[pos]);
        perm(str , pos + 1 , ans);
        swap(str[i] , str[pos]);
    }
}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string> ans;
    perm(str, 0 , ans);
    sort(ans.begin() , ans.end());
    return ans;
}
