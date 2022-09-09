class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        string s = address;
        for(auto m: s) {
            if(m =='.') ans+="[.]";
            else ans+=m;
        }
        
        return ans;
    }
};
