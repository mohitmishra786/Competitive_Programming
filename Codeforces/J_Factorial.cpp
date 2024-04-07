#include<bits/stdc++.h>
using namespace std;

long long solve(int n){
	if(n == 0) return 1;
	return n * solve(n - 1);
}

int main(){
	int n; cin >> n;
	cout << solve(n) << endl;
}
