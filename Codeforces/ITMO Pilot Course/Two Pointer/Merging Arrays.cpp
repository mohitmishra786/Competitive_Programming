#include <bits/stdc++.h>
using namespace std;

/*
	TC - O(n)
*/

void solve(){
	int n , m;
	cin >> n >> m;
	vector<int> A(n), B(m), C;
	for(int i = 0 ; i < n ; i++){
		cin >> A[i];
	}
	for(int i = 0 ; i < m ; i++){
		cin >> B[i];
	}
	int i = 0 , j = 0;
	while(i != n && j != m){
		if(A[i] < B[j]){
			C.push_back(A[i]);
			i++;
		}
		else{
			C.push_back(B[j]);
			j++;
		}
	}
	
	while(i != n){
		C.push_back(A[i]);
		i++;
	}
	while(j != m){
		C.push_back(B[j]);
		j++;
	}
	
	for(auto x : C){
		cout << x << " ";
	}
	cout << endl;
}

int main(){
	solve();
}	