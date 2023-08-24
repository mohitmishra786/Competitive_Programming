#include <bits/stdc++.h>
using namespace std;


bool solve(long long k, long long start){
	if(start == k){
		return true;
	}
	if(start > k) return false;
	
	return (solve(k , start * 10) || solve(k, start * 20));
}

int main(){
	long long t, k; cin >> t;
	while(t--){
		cin >> k;
		if(solve(k , 1)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		} 
	}
	
	return 0;
}	