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

void solve(vector<ll> v){
	int n; cin >> n;
	int cnt = 0;
	bool a = true;
	while(a){
		for(int i = 0 ; i < v.size(); i++){
			if(n <= 1){
				cout << cnt << endl;
				return;
			}
			if(v[i] > n){
				n -= v[i - 1];
				cnt++;
				i = 0;
			}
		}
	}
	cout << cnt << endl;
}

ll cardCounter(ll n){
	return (n * (n - 1) * 3)/2 + (n * 2);
}

int main(){
	vector<ll> v;
	v.push_back(0);
	ll n = 1;
	while(v[v.size() - 1] < M){
		v.push_back(cardCounter(n));
		n++;
	}
	int t; cin >> t;
	while(t--){
		solve(v);
	}
}