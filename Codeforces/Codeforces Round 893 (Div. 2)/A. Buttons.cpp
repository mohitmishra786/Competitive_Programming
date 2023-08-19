#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a, b, c;
	cin >> a  >> b >> c;
	// if(a == b){
	// 	if(c % 2 == 0) cout << "Second" << endl;
	// 	else cout << "First" << endl;
	// }
	// else if(a > b){
	// 	if((a - b) > c) cout << "First" << endl;
	// 	else{
	// 		if((c - (a - b)) % 2 == 0) cout << "Second" << endl;
	// 		else cout << "First" << endl;
	// 	}
	// }
	// else{
	// 	if((b - a) > c) cout << "Second" << endl;
	// 	else{
	// 		if((c - (b - a)) % 2 == 1) cout << "First" << endl;
	// 		else cout << "Second" << endl;
	// 	}
	// }
	
	if(c % 2 == 0){
		if(a > b) cout << "First" << endl;
		else cout << "Second" << endl;
	}
	else{
		a++;
		if(a > b) cout << "First" << endl;
		else cout << "Second" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}	