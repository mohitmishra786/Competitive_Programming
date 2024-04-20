#include<bits/stdc++.h>
using namespace std;

int solve(int i, int j, int n, int m, vector<vector<int>>& v){
	if(i == n - 1 && j == m - 1){
		return v[i][j];
	}
	if(i < n - 1){
		if(j < m - 1) return max(solve(i + 1, j, n, m, v) + v[i][j], solve(i, j + 1, n, m, v) + v[i][j]);
		else return solve(i + 1, j, n, m, v) + v[i][j];
	}
	else{
		return solve(i, j + 1, n, m, v) + v[i][j];
	}
}

int main(){
	int n, m, x;
	cin >> n >> m;
	vector<vector<int>> v;
	for(int i = 0 ; i < n; i++){
		vector<int> z;
		for(int j = 0; j < m; j++){
			cin >> x;
			z.push_back(x);
		}
		v.push_back(z);
	}
	cout << solve(0, 0, n, m, v) << endl;
}
