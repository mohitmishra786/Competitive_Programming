#include<bits/stdc++.h>
using namespace std;

bool solve(int index,int n, int x, vector<int>& v, int sum){
	if(index == n){
		return sum == x;
	}
	return solve(index + 1, n, x, v, sum + v[index]) || solve(index + 1, n, x, v, sum - v[index]);
}

int main(){
	int n, x, p;
	cin >> n >> x;
	vector<int> v;
	for(int i = 0 ; i < n; i++){
		cin >> p;
		v.push_back(p);
	}
	if(solve(1, n , x, v, v[0])) cout << "YES" << endl;
	else cout << "NO" << endl;
}
