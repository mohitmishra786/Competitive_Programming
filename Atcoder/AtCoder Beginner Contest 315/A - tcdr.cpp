#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin >> s;
	string ans = "";
	for(auto x : s){
		if(x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u'){
			continue;
		}
		else ans += x;
	}
	cout << ans << endl;
}

int main(){
	solve();
}	