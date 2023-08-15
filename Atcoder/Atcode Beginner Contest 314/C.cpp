#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, m, p;
	cin >> n >> m;
	string s;
	cin >> s;
	vector<vector<char>> v(m); 
	for(int i = 0 ; i < n; i++){
		cin >> p;
		v[p - 1].push_back(i);
	}
	vector<char> ans(n);
	for(int i = 0; i < m; i++){
		int k = v[i].size();
		deque<int> dq;
		for(int j = 0; j < k; j++){
			dq.push_back(v[i][j]);
		}
		char o = dq.back();
		dq.pop_back();
		dq.push_front(o);
		
		for(int h = 0; h < k; h++){
			ans[v[i][h]] = s[dq.front()];
			dq.pop_front();
		}
	}
	
	for(auto pq: ans){
		cout << pq << " ";
	}
	cout << endl;
}

int main(){
	solve();
}	