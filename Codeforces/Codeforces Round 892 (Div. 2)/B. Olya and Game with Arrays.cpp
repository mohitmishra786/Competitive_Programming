#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int min_ = INT_MAX; int min_arr = -1;
	vector<vector<int>> v(n);
	for(int i = 0 ; i < n ; i++){
		int p; cin >> p;
		vector<int> arr(p);
		for(int j = 0 ; j < p; j++){
			cin >> arr[i];
			int min_1 = min(arr[i], min_);
			
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}	