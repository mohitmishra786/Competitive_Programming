#include <bits/stdc++.h>
using namespace std;

vector<int> sumOfThreeValues(vector<pair<int, int>> arr, int n, int x){
	for(int i = 0 ; i < n ; i++){
		int v = x - arr[i].first;
		int r = n - 1, l = i + 1;
		while(l < r){
			if(arr[l].first + arr[r].first < v) l++;
			else if(arr[l].first + arr[r].first > v) r--;
			else{
				return {arr[i].second + 1, arr[l].second + 1, arr[r].second + 1};
			}
		}
	}
	return {};
}


void solve(){
	int n, x;
	cin >> n >> x;
	vector<pair<int, int>> arr;
	int p;
	for(int i = 0 ; i < n; i++){
		cin >> p;
		arr.push_back(make_pair(p , i));
	}
	
	sort(arr.begin(), arr.end());
	
	vector<int> ans = sumOfThreeValues(arr, n , x);
	if(ans.size() == 0){
		cout << "IMPOSSIBLE" << endl;
	}
	else{
		for(auto x : ans){
			cout << x << " ";
		}
		cout << endl;
	}
}

int main(){
	solve();
}	