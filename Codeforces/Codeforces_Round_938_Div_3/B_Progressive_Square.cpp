#include<bits/stdc++.h>
using namespace std;

void solve(){
	long long int n, c, d;
	cin >> n >> c >> d;
	long long int size = n * n;
	long long int arr[size];
	set<long long int> s;
	for(long long int i = 0 ; i < size; i++){
		cin >> arr[i];
		s.insert(arr[i]);
		if((arr[i] - arr[0]) % c != 0 || (arr[i] - arr[0]) % d != 0){
			cout << "NO" << endl;
			return;
		}
	}
	
	if(s.size() !=  size){
		cout << "NO" << endl;
	}
	else{
		cout << "YES" << endl;
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}
