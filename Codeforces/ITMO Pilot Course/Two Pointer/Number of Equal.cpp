#include <bits/stdc++.h>
using namespace std;
 
int newCountPairs(vector<int> a, vector<int> b, int n, int m){
	int i =0, j = 0;
	int res = 0;
	while(j < m && i < n){
		int factor = 0, target = b[j];
		
		while(b[j] == target && j < m){
			j++;
			factor++;
		}
		
		while(a[i] < target && i < n){
			i++;
		}
		
		int cnt = 0;
		while(a[i] == target && i < n){
			i++;
			cnt++;
		}
		
		res += factor * cnt;
	}
	return res;
}
 
void solve(){
	int n , m;
	cin >> n >> m;
	vector<int> a(n), b(m), c;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	
	for(int j = 0 ; j < m ; j++){
		cin >> b[j];
	}
	
	int sum = newCountPairs(a, b , n , m);
	cout << sum << endl;
}
 
int main(){
	solve();
}	