bool Palindrome(string &s , int l , int r){
    if(l >= r) return true;
    if(s[l] == s[r]){
           Palindrome(s , l + 1 , r - 1);
    }
    else{
        return false;
    }
}

bool isPalindrome(string &s)
{
	// Write your code here.
    int n = s.length();
    if(Palindrome(s , 0 , n - 1)){
        return true;
    }
    else return false;
}
