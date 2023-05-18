#include <bits/stdc++.h>
using namespace std;


/* 
	This is Naive Solution.
	TC - O(n^2)
	SC - O(n) 
*/
void naive(){
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0 ; i < n - 1 ; i++){
		for(int j = i + 1 ; j < n; j++ ){
			if(arr[i] + arr[j] == k){
				cout << i + 1 << " " << j + 1 << endl;
				break;
			}
		}
	}
	
	cout << "IMPOSSIBLE" << endl;
}

/*
	This is the best approach.
	TC - O(nlogn)
	SC - O(n)
*/

void solve(){
	int n, k;
	cin >> n >> k;
	vector<pair<int,int>> arr(n);
	int x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		arr[i] = {x , i};
	}
	sort(arr.begin(), arr.end());
	int l = 0, r = n - 1;
	while(l < r){
		if(arr[l].first + arr[r].first < k){
			l++;
		}
		else if(arr[l].first + arr[r].first > k){
			r--;
		}
		else{
			cout << arr[l].second + 1 << " " << arr[r].second + 1 << endl;
			return;
		}
	}
	cout << "IMPOSSIBLE" << endl;
}

int main(){
	solve();
}	