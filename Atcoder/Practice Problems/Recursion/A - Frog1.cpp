#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = LLONG_MAX >> 1;

int dp[100013];

int solve(vector<int> &v, int start){
	if(start >= v.size()){
		return INF;
	}
	if(start == v.size() - 1){
		return 0;
	}
	
	if(dp[start] != -1){
	    return dp[start];
	}
	
	return dp[start] = min(solve(v, start + 1) + abs(v[start + 1] - v[start]), solve(v, start + 2) + abs(v[start + 2] - v[start]));
}

signed main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	
	memset(dp, -1, sizeof(dp));
	cout << solve(v, 0) << endl;
	return 0;
}	