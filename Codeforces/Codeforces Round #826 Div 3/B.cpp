#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	if(n == 3) cout << -1 << endl;
	else if(n == 2) cout << 2 << " " << 1 << endl;
	else{
		vector<int> arr(n);
		for(int i = 0 ; i < n ; i++){
			arr[i] = i + 1;
		}
		
		for(int i = 0 ; i < n - 2 ; i++){
			int temp = arr[i + 2];
			arr[i + 2] = arr[i];
			arr[i] = temp;
		}
		
		for(int i = 0 ; i < n ; i++){
			cout << arr[i] << " ";
		}
		cout << endl;
	}
} 

int main() {
    int tc = 1;
   	cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}    