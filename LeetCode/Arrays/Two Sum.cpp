#include <bits/stdc++.h>
using namespace std;


// Two-Pointer Approach
vector<int> solve(vector<int> arr, int target){
	int n = sizeof(arr);
	vector<int> ans;
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[i] + arr[j] == target){
				ans.push_back(i);
				ans.push_back(j);
				return ans;
			}
		}
	}
}


int main(){
	vector<int> arr{2, 7, 11, 15};
	int target = 18;
	vector<int> ans = solve(arr, target);
	for(auto x : ans){
		cout << x << " ";
	}
	cout << endl;

}