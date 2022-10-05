#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	
	// This is the basic method to solve this
	
	// if(s == "YES" || s == "yes"|| s == "Yes" || s == "YeS" | s== "YEs" || s == "yES" || s== "yEs" || s == "yeS" || s== "Yes"){
	// 	cout << "YES" << endl;
	// }	
	// else {
	// 	cout << "NO" << endl;
	// }
	
	// we can simply do it by using tolower() function
	
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	if(s == "yes") cout << "YES" << endl;
	else cout << "NO" << endl;
} 

int main() {
    int tc = 1;
    cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}    