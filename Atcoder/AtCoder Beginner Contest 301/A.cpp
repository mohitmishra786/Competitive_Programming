#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n){
	int p = 0;
	int t = 0, a = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'T'){
			t++;
		}
		else{
			a++;
		}
	}
	
	if(t > a){
		cout << 'T' << endl;
	}
	else if(t < a){
		cout << 'A' << endl;
	}
	else{
		if(s[n - 1] == 'A'){
			cout << 'T' << endl;
		}
		else{
			cout << 'A' << endl;
		}
	}
}

int main(){
	int n;
	string s;
	cin >> n;
	cin >> s;
	solve(s , n);
}	