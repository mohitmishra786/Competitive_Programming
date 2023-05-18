#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n , x;
	cin >> n >> x;
	vector<int> arr(n);
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
	}
	int sum = 0;
	int count = 0;
	
	for(int l = 0, r = 0; r < n; r++){
		sum += arr[r];
		while(sum > x){
			sum -= arr[l];
			l++;
		}
		
		if(sum == x) count++;
	}
	cout << count << endl;
}

int main(){
	solve();
}	