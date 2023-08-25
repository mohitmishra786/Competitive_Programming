#include <bits/stdc++.h>
using namespace std;

void solve(int n, int m){
// 	int n , m;
// 	cin >> n >> m;
//	cout << n << " " << m << endl;
	string s;
	vector<pair<char, int>> ans;
	if(m <= 3){
	   // cout << m << endl;
		cout << "NO" << endl;
		for(int i = 0 ; i < n; i++){
		    cin >> s;
		}
	//	return;
	}
	else{
		for(int i = 0 ; i < n; i++){
			cin >> s;
			for(int j = 0 ; j < m; j++){
				if(s[j] == 'v' && ans.size() == 0){
					ans.push_back({s[j], j});
				}
				else if(s[j] == 'i' && ans[ans.size() - 1].first == 'v' && ans[ans.size() - 1].second != j && ans[ans.size() - 1].second < j ){
					ans.push_back({s[j], j});
				}
				else if(s[j] == 'k' && ans[ans.size() - 1].first == 'i' && ans[ans.size() - 1].second != j && ans[ans.size() - 1].second < j ){
					ans.push_back({s[j], j});
				}
				else if(s[j] == 'a' && ans[ans.size() - 1].first == 'k' && ans[ans.size() - 1].second != j && ans[ans.size() - 1].second < j ){
					ans.push_back({s[j], j});
				}
			}
		}
			string sol = "";
        	for(auto x : ans){
        	   // cout << x.second << " ";
        	   // cout << endl;
        	    sol += x.first;
        	}
            // cout << sol << endl;
        	
        	if(sol == "vika"){
        	    cout << "YES" << endl;
        	}
        	else cout << "NO" << endl;
	}
	

}

int main(){
	int t;
	cin >> t;
	while(t--){
	    int n,m;
	    cin >> n >> m;
	   // cout << n << " " << m << endl;
		solve(n , m);
	}
}	