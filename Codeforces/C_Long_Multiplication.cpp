#include<bits/stdc++.h>
using namespace std;

void solve(){
	string a, b;
	cin >> a >> b;
	int n = a.size();
	if(n == 1){
		cout << b << endl;
		cout << a << endl;
		return ;
	}
	int z = n/2;
	vector<int> A, B;
	for(int i = 0 ; i < n; i++){
		A.push_back(a[0]);
		B.push_back(b[0]);
	}
	int xp = -1;
	for(int i = 0 ; i < n - z; i++){
		if(A[i] == B[i]){
			continue;
		}
		else if(A[i] > B[i]){
			xp = 0;
			break;
		}
		else{
			xp = 1;
			break;
		}
	}
	int temp = -1;
	if(xp == 0){
		for(int i = 0 ; i < n; i++){
			if(i == z){
				if(A[z] > B[z]){
					temp = A[z];
					A[z] = B[z];
					B[z] = temp;
				}
			}
		}
	}
	else{
		for(int i = 0 ; i < n; i++){
			if(i == z){
				if(B[z] > A[z]){
					temp = B[z];
					B[z] = A[z];
					A[z] = temp;
				}
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		cout << A[i] << "";
	}
	cout << endl;
	for(int i = 0; i < n; i++){
		cout << B[i] << "";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
