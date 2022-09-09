class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int r = 0;
        int sum;
        while(!a.empty() or !b.empty()){
            sum  = (a.empty() ? 0 : (a.back() - '0')) + (b.empty() ? 0 : (b.back() - '0')) + r;
            r = sum/2;
            ans.push_back(sum % 2 + '0');
            if(!a.empty()){
                a.pop_back();
            }
            if(!b.empty()){
                b.pop_back();
            }
        }
        if(r != 0){
            ans.push_back(r + '0');
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};
