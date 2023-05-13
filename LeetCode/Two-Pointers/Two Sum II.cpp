#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int arr[], int l, int r, int num){
	while(l < r){
        if(arr[l] + arr[r] < num){
            l++;
        }
        else if(arr[l] + arr[r] > num){
            r--;
        }
        else{

            return {l + 1, r + 1};
        }
    }
	return {};
}

int main(){
	int n, num; 
	cin >> n >> num;
	int arr[n];
	for(int i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	int l = 0;
	int r = n - 1;
	vector<int> ans = solve(arr, l , r, num);
	for(auto x : ans){
		cout << x << " ";
	}
	cout << endl;
}	