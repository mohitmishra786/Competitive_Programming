class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        string ans = "";
        
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] >= 'A' and s[i] <= 'Z'){
                s[i] += 32;
            }
            
            if(isalnum(s[i]) and s[i] != ' '){
                temp += s[i];
                ans += s[i];
            }
        }
        int n = ans.length();
        int i = 0 , j = n - 1;
        int count = 0;
        while(i < n and j >= 0){
            if(temp[i] == ans[j]) count++;
            i++;
            j--;
        }
        if(count == n) return true;
        else return false;
    }
};
