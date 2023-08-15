#include <bits/stdc++.h>
using namespace std;

void solve(){
	string a = "3.";
	string s = "1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
	int n;
	cin >> n;
	string ans = a;
	for(int i = 0; i < n; i++){
		ans += s[i];
	}
	
	cout << ans << endl;
}

int main(){
	solve();
}	