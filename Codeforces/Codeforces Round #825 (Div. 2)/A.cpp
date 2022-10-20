#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,x;
	cin >> n;
	vector<int> a , b;
	int one_1 = 0 , one_2 = 0 , zero_1 = 0, zero_2 = 0;
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		a.push_back(x);
		if(x == 0) zero_1++;
		else one_1++;
	}
	for(int i = 0 ; i < n ; i++){
		cin >> x;
		b.push_back(x);
		if(x == 0) zero_2++;
		else one_2++;
	}
	if(a == b) cout << 0 << endl;
	else if(one_1 == one_2 || zero_1 == zero_2) cout << 1 << endl;
	else cout << abs(one_2 - one_1) << endl;
} 

int main() {
    int tc = 1;
   	cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}    