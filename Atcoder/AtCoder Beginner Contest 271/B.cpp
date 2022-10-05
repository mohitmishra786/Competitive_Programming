#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; ++i) {
        int l;
        cin >> l;
        a[i] = vector<int>(l);
        for (int j = 0; j < l; ++j) {
            cin >> a[i][j];
        }
    }
    for (int k = 0; k < q; ++k) {
        int s, t;
        cin >> s >> t;
        cout << a[s - 1][t - 1] << '\n';
    }
} 

int main() {
    int tc = 1;
   // cin >> tc;
    for(int i = 0 ; i < tc ; i++){
    	solve();
    }
     
}