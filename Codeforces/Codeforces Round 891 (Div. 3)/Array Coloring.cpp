#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n);
	int sum = 0;
	for(int i = 0 ; i < n; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	
	
	
	bool hasEven = false;
	bool hasOdd = false;
	for(auto i : arr){
		if(i % 2 == 0){
			hasEven = true;
		}
		else{
			hasOdd = true;
		}
	}
	
	if (sum % 2 != 0 || (!hasEven || !hasOdd)) {
        cout << "NO" << endl;
    }
	else{
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}	