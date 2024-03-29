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
	int n, m;
	cin >> n >> m;
	vector<vector<char>> v(n, vector<char> (m));
	for(int i = 0 ; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> v[i][j];
		}
	}
	
	queue<char> q;
	q.push('v');
	q.push('i');
	q.push('k');
	q.push('a');
	
	for(int i = 0 ; i < m; i++){
		for(int j = 0; j < n; j++){
			if(q.empty()) break;
			if(v[j][i] == q.front()){
				q.pop();
				break;
			}
		}
	}
	
	if(q.empty()) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
}