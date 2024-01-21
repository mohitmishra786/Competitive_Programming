/**
 *    author:  immadmohit      
**/

#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ff first
#define ss second
#define vec vector
#define pb push_back
#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll,ll>
#define pi pair<int,int>
#define mod(a,b) (a%b+b)%b
#define ceil(a,b) ((a+b-1)/b)
#define flushout cout.flush();
#define sz(x) ((int) (x).size())
#define __lcm(a,b) (a*b)/__gcd(a,b)
#define all(x) (x).begin(), (x).end()
#define vin(a) for(auto &ii : a)cin>>ii
#define f(i,a,b) for(int i=(a);i<(b);i++)
#define fr(i,a,b) for(int i=(b-1);i>=(a);i--)
#define dbg(x) cout<<'>'<< #x <<':'<< x <<endl;
#define pout(x,n) cout<<fixed<<setprecision(x)<<n
#define vout(v) for(auto ii:v)cout<<ii<<' ';cout<<endl;

const int M = 1000000007;

/* CODE STARTS HERE */

void solve(){
	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> count(n + 1, 0);
	for(int i = 0 ; i < n; i++){
		cin >> v[i];
		count[v[i]]++;
	}
	if(v[0] != n){
		cout << "NO" << endl;
	}
	else{;
		vector<int> ans(n + 1, 0);
		ans[n] = count[n];
		for(int i = n - 1; i >= 0; i--){
			ans[i] = count[i] + ans[i + 1];
		}
		
		for(int i = 0; i < n; i++){
		    if(v[i] != ans[i + 1]){
		        cout << "NO" << endl;
		        return;
		    }
		}
		
		cout << "YES" << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}