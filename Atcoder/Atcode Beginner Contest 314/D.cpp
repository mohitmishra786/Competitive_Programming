#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	int t_s;
	cin >> t_s;
	while(t_s--){
		int t, x;
		char c;
		cin >> t >> x >> c;
		if(t == 2){
			transform(s.begin(), s.end(), s.begin(), ::tolower);
		}
		else if(t == 3){
			transform(s.begin(), s.end(), s.begin(), ::toupper);
		}
		else{
			s[x - 1] = c;
		}
	}
	
	cout << s << endl;
}

int main(){
	solve();
}	