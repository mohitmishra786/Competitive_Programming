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
	vector<int> ans;
	bool p = true;
	for(int i = 0 ; i < n; i++){
		cin >> v[i];
		if(i > 0 && abs(v[i] - v[i - 1]) != 1){
			p = false;
		}
	}
	
	if(p == true){
	    //cout << "mohit" << endl;
		cout << n << endl;
		for(auto x : v){
			cout << x << " ";
		}
		cout << endl;
	}
	else{
		ans.push_back(v[0]);
		for(int i = 1; i < n; i++){
			ans.push_back(v[i] - 1);
			ans.push_back(v[i]);
		}
		
		cout << ans.size() << endl;
		for(auto x : ans){
			cout << x << " ";
		}
		cout << endl;
	}
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}