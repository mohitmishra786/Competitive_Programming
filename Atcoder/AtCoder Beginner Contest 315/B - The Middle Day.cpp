#include <bits/stdc++.h>
using namespace std;

void solve(){
	int m, x;
	cin >> m;
	int sum = 0;
	 
	vector<int> arr(m);
	for(int i = 0 ; i < m; i++){
		cin >> x;
		sum += x;
		arr[i] = sum;
	}
	if(m == 1){
		cout << 1 << " " << arr[0] << endl;
		return;
	}
	int mid = (sum + 1)/2;
	for(int i = 0 ; i < m; i++){
		if(arr[i] == mid){
			cout << i + 1 << " " << 0 << endl;
			break;
		}
		else if(arr[i] > mid){
			cout << i + 1 << " " << mid - arr[i - 1] << endl;
			break;
		}
	}	
}

int main(){
	solve();
}	