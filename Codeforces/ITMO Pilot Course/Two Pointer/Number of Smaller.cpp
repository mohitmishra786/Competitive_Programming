#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , m;
	cin >> n >> m;
	vector<int> a(n), b(m);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	for(int j = 0 ; j < m; j++){
		cin >> b[j];
	}
	vector<int> c;
	int j = 0 , cnt = 0;
	for(int i = 0 ; i < m; i++){
		while(b[i] > a[j] && j < n){
			cnt++;
			j++;
		}
		c.push_back(cnt);
	}
	
	// int i = 0;
	// for(int j = 0; j < m; j++){
	// 	while(i < n && a[i] < b[j]){
	// 		i++;
	// 	}
	// 	c.push_back(i);
	// }
	
	for(auto x : c){
		cout << x << " ";
	}
	cout << endl;
}

int main(){
	solve();
}	