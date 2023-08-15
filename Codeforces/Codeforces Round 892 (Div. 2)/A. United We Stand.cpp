#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, p; cin >> n;
	vector<int> b , c;
	for(int i = 0 ; i < n ; i++){
		cin >> p;
		if(p % 2 != 0) b.push_back(p);
		else c.push_back(p);
	}
	
	if(b.size() == 0 or c.size() == 0) cout << -1 << endl;
	else{
		cout << b.size() << " " << c.size() << endl;
		for(auto x : b){
			cout << x << " ";
		}
		cout << endl;
		for(auto x : c){
			cout << x << " ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}	