#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	
	vector<int> arr(n);
	vector<bool> vol(n + 2 , false);
	int sold = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> arr[i];
		if(arr[i] >= vol.size()) sold++;
		else if(vol[arr[i]]) sold++;
		else vol[arr[i]] = true; 
	}
	
	int l = 1, r = n + 1;
	while(true){
		while(vol[l]) l++;
		while(r != 0 && !vol[r]) r--;
		
		if(sold >= 2){
			sold -= 2;
			vol[l] = true;
		}
		
		// if sold is odd
		else{
			if(l >= r) break;
			vol[r] = false;
			sold++;
		}
	}
	
	cout << l - 1 << endl;
} 

int main() {
    int tc = 1;
   // cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}    