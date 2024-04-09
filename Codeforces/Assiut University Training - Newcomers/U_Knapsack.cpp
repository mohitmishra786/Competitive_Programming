#include<bits/stdc++.h>
using namespace std;

int solve(int W, vector<int>& w, vector<int>& v, int index, int n){
	if(index >= n){
		return 0;
	}
	
	if(W >= w[index]){
		return max(solve(W - w[index], w, v, index + 1, n) + v[index], solve(W, w, v, index + 1, n));
	}
	else{
		return solve(W, w, v, index + 1, n);
	}
}

int main(){
	int n, W, x, y; cin >> n >> W;
	map<int, int> mp;
	vector<int> a, b;
	for(int i = 0; i < n; i++){
		cin >> x >> y;
		a.push_back(x);
		b.push_back(y);
	}
	cout << solve(W, a, b, 0, n) << endl;
}
