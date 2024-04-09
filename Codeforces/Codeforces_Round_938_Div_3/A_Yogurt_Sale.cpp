#include<bits/stdc++.h>
using namespace std;

int solve(){
	int n, a, b;
	cin >> n >> a >> b;
	int ans = 0;
	if(a * 2 < b){
		ans = n * a;
	}
	else{
		if(n % 2) ans = a + b * (n/2);
		else ans = b * (n/2);
	}
	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		cout << solve() << endl;
	}
}
