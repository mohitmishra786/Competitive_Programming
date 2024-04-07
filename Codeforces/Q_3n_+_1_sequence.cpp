#include<bits/stdc++.h>
using namespace std;

int solve(int n, int count){
	if(n == 1){
		count++;
		return count;
	}
	if(n % 2) return solve(3 * n + 1, count + 1);
	else return solve(n/2, count + 1);
}

int main(){
	int n; cin >> n;
	int count = 0;
	cout << solve(n, count) << endl;
}
