class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string , int> mp;
        int n = cpdomains.size();
        int num;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < cpdomains[i].size() ; j++){
                if(cpdomains[i][j] == ' '){
                    num = stoi(cpdomains[i].substr(0 , j));
                    mp[cpdomains[i].substr(j + 1 , cpdomains[i].size())] += num;
                }
                
                if(cpdomains[i][j] == '.'){
                    mp[cpdomains[i].substr(j + 1 , cpdomains[i].size())] += num;
                }
            }
        }
        
        
        vector<string> ans;
        for(auto& e : mp){
            ans.push_back(to_string(e.second) +  " " + e.first);
        }
        return ans;
    }
};
