#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	vector<int> arr(n);
	int even = 0, odd = 0;
	for(int i = 0 ; i < n; i++){
		cin >> arr[i];
		if(arr[i] % 2 == 0) even++;
		else odd++;
	}
	int count = 0;
	if(even == 0) cout << 0 << endl;
	else{
		int k = n - 1;
		int point;
		sort(arr.begin(), arr.end());
		while(even > 0){
			count++;
			if(arr[k] % 2 == 0) point = arr[k];
			for(int i = 0 ; i < n; i++){
				if(arr[i] == point) arr[i] = arr[i]/2;
			}
			
			while(arr[k] % 2 != 0){
				k--;
			}
		}
		cout << count << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}	
#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	set<int> s;
	int z;
	for(int i = 0 ; i < n; i++){
		cin >> z;
		s.insert(z);
	}
	
	int ans = 0;
	while(!s.empty()){
		int m = *s.rbegin();
		s.erase(m);
		if(m % 2 == 0){
			ans++;
			s.insert(m/2);
		}
	}
	
	cout << ans << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}	